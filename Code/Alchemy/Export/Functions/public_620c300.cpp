#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620c300);
CLANG_FORWARD_PROC_SYMBOL(public_620c3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_62478c1);

#define public_620c34a _public_620c34a
#define public_620c364 _public_620c364
#define public_620c39e _public_620c39e

PROC_DECLARE(0x620c300, internal_620c300, public_620c300);
extern "C" NAKED register_t __cdecl internal_620c300()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62478c1 @0x620c302*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62478c1
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
        jle public_620c364
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_624bdc0]
        call public_6246188
        cmp eax, ebp
        jle public_620c34a
        mov ebp, eax
        public_620c34a : nop
        add edi, ebp
        cmp ebx, edi
        je public_620c364
        mov ecx, dword ptr ds : [esi+4]
        push ebx
        push edi
        push ecx
        call public_620c3d0
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], edi
        public_620c364 : nop
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
        je public_620c39e
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        test ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        je public_620c39e
        mov edx, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [edx+4]
        public_620c39e : nop
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
        UNREACHABLE_TRAP(0x620c300)
    }
}

#undef public_620c34a
#undef public_620c364
#undef public_620c39e
