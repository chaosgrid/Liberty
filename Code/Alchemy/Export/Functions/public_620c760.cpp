#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f00);
CLANG_FORWARD_PROC_SYMBOL(public_620a5c0);
CLANG_FORWARD_PROC_SYMBOL(public_620c760);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_6247951);

#define public_620c7d5 _public_620c7d5
#define public_620c7df _public_620c7df
#define public_620c838 _public_620c838
#define public_620c853 _public_620c853

PROC_DECLARE(0x620c760, internal_620c760, public_620c760);
extern "C" NAKED register_t __cdecl internal_620c760()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247951 @0x620c762*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247951
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0x2C]
        push edi
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+0x14]
        call public_6209f00
        mov edi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        sub edi, ebp
        sar edi, 3
        mov ecx, eax
        lea ebx, ds:[eax+1]
        sub ecx, edi
        mov ebp, 1
        lea eax, ds:[ebx+1]
        mov dword ptr ss : [esp+0x14], ebx
        lea edx, ds:[ecx*8+8]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], edx
        jle public_620c7df
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_624bdc0]
        call public_6246188
        cmp eax, ebp
        jle public_620c7d5
        mov ebp, eax
        public_620c7d5 : nop
        add ebx, ebp
        mov ecx, esi
        push ebx
        call public_620a5c0
        public_620c7df : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea eax, ds:[ecx+edi*8]
        mov dword ptr ss : [esp+0x14], eax
        push eax
        add eax, 8
        push eax
        call dword ptr ds : [public_624b060]
        mov edi, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        inc edi
        mov ecx, eax
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], ecx
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+0x18], 0
        test eax, eax
        pop ebx
        je public_620c838
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        mov dword ptr ds : [ecx+4], eax
        je public_620c853
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_620c838 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0x10
        public_620c853 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x620c760)
    }
}

#undef public_620c7d5
#undef public_620c7df
#undef public_620c838
#undef public_620c853
