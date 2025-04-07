#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d560);

#define public_6f2d573 _public_6f2d573
#define public_6f2d58e _public_6f2d58e
#define public_6f2d592 _public_6f2d592
#define public_6f2d597 _public_6f2d597
#define public_6f2d5c9 _public_6f2d5c9

PROC_DECLARE(0x6f2d560, internal_6f2d560, public_6f2d560);
extern "C" NAKED register_t __cdecl internal_6f2d560()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2d597
        public_6f2d573 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        call dword ptr ds : [public_6f5a03c]
        add esp, 8
        test al, al
        je public_6f2d58e
        mov esi, dword ptr ds : [esi+8]
        jmp public_6f2d592
        public_6f2d58e : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_6f2d592 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6f2d573
        public_6f2d597 : nop
        cmp ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0xC], ebx
        je public_6f2d5c9
        mov edx, dword ptr ss : [esp+0x18]
        add ebx, 0xC
        push ebx
        push edx
        call dword ptr ds : [public_6f5a03c]
        add esp, 8
        test al, al
        jne public_6f2d5c9
        lea eax, ss:[esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6f2d5c9 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f2d560)
    }
}

#undef public_6f2d573
#undef public_6f2d58e
#undef public_6f2d592
#undef public_6f2d597
#undef public_6f2d5c9
