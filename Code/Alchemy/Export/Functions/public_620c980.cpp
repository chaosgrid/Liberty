#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620c980);
CLANG_FORWARD_PROC_SYMBOL(public_620ca50);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_62479a1);

#define public_620c9ca _public_620c9ca
#define public_620c9e4 _public_620c9e4
#define public_620ca1e _public_620ca1e

PROC_DECLARE(0x620c980, internal_620c980, public_620c980);
extern "C" NAKED register_t __cdecl internal_620c980()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62479a1 @0x620c982*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62479a1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ebp, 1
        mov edi, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ds : [esi+0x10]
        inc edi
        mov dword ptr ss : [esp+0x10], edi
        lea eax, ds:[edi+1]
        cmp eax, ebx
        jle public_620c9e4
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_624bdc0]
        call public_6246188
        cmp eax, ebp
        jle public_620c9ca
        mov ebp, eax
        public_620c9ca : nop
        add edi, ebp
        cmp ebx, edi
        je public_620c9e4
        mov ecx, dword ptr ds : [esi+4]
        push ebx
        push edi
        push ecx
        call public_620ca50
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], edi
        public_620c9e4 : nop
        mov edx, dword ptr ds : [esi+0xC]
        inc edx
        mov dword ptr ds : [esi+0xC], edx
        mov eax, edx
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*8]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        je public_620ca1e
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        test ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        je public_620ca1e
        mov edx, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [edx+4]
        public_620ca1e : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea edx, ds:[ecx+eax*8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x620c980)
    }
}

#undef public_620c9ca
#undef public_620c9e4
#undef public_620ca1e
