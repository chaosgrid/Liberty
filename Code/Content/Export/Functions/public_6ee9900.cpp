#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8d70);
CLANG_FORWARD_PROC_SYMBOL(public_6ee9900);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73990);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6ee9920 _public_6ee9920
#define public_6ee993d _public_6ee993d
#define public_6ee9991 _public_6ee9991

PROC_DECLARE(0x6ee9900, internal_6ee9900, public_6ee9900);
extern "C" NAKED register_t __cdecl internal_6ee9900()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebp, 0x1F
        push esi
        push edi
        mov edi, ecx
        je public_6ee993d
        mov esi, dword ptr ds : [edi+8]
        cmp esi, dword ptr ds : [edi+0xC]
        je public_6ee9991
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        mov edi, edi
        public_6ee9920 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebp
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi+0xC]
        add esi, 4
        cmp esi, eax
        jne public_6ee9920
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 8
        public_6ee993d : nop
        mov esi, dword ptr ss : [esp+0x24]
        lea ecx, ds:[esi+8]
        push ecx
        call public_6f75f30
        push esi
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], offset public_6fb74bc
        call public_6f49bc0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        push edx
        mov dword ptr ss : [esp+0x18], eax
        call public_6f73990
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6ee9991
        test eax, eax
        je public_6ee9991
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_6fd1c08
        call public_6ee8d70
        fstp st(0)
        public_6ee9991 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6ee9900)
    }
}

#undef public_6ee9920
#undef public_6ee993d
#undef public_6ee9991
