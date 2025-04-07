#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d28940);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea20);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eca0);

#define public_6d2897c _public_6d2897c
#define public_6d28993 _public_6d28993
#define public_6d289ad _public_6d289ad
#define public_6d289c0 _public_6d289c0
#define public_6d289e0 _public_6d289e0
#define public_6d289e8 _public_6d289e8
#define public_6d289f3 _public_6d289f3
#define public_6d289fb _public_6d289fb
#define public_6d28a0e _public_6d28a0e
#define public_6d28a16 _public_6d28a16
#define public_6d28a24 _public_6d28a24
#define public_6d28a2c _public_6d28a2c
#define public_6d28a55 _public_6d28a55
#define public_6d28a6c _public_6d28a6c
#define public_6d28a85 _public_6d28a85
#define public_6d28a8a _public_6d28a8a
#define public_6d28a93 _public_6d28a93

PROC_DECLARE(0x6d28940, internal_6d28940, public_6d28940);
extern "C" NAKED register_t __cdecl internal_6d28940()
{
    __asm
    {
        push ecx
        mov ax, word ptr ss : [esp+8]
        cmp ax, 0xFF
        push esi
        push edi
        mov esi, ecx
        ja public_6d289c0
        mov cl, byte ptr ss : [esp+0x14]
        test cl, cl
        je public_6d28993
        movsx edi, al
        push edi
        call dword ptr ds : [public_6d64ba8]
        xor ecx, ecx
        mov cl, al
        mov eax, ecx
        shr eax, 5
        and ecx, 0x8000001F
        lea eax, ds:[esi+eax*4+8]
        jns public_6d2897c
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2897c : nop
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        push edi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        call dword ptr ds : [public_6d64c50]
        add esp, 8
        public_6d28993 : nop
        xor ecx, ecx
        mov cl, al
        mov eax, ecx
        shr eax, 5
        and ecx, 0x8000001F
        lea eax, ds:[esi+eax*4+8]
        jns public_6d289ad
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d289ad : nop
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        pop edi
        pop esi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        public_6d289c0 : nop
        mov word ptr ss : [esp+0x14], ax
        mov word ptr ss : [esp+0x16], ax
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 0x2C
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d289e0
        xor ecx, ecx
        jmp public_6d289e8
        public_6d289e0 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        public_6d289e8 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6d289f3
        xor eax, eax
        jmp public_6d289fb
        public_6d289f3 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_6d289fb : nop
        cmp ecx, eax
        jne public_6d28a93
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6d28a0e
        xor eax, eax
        jmp public_6d28a16
        public_6d28a0e : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6d28a16 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        lea edx, ds:[eax+5]
        jne public_6d28a24
        xor eax, eax
        jmp public_6d28a2c
        public_6d28a24 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6d28a2c : nop
        cmp eax, edx
        jae public_6d28a93
        mov ecx, dword ptr ds : [esi]
        push ebx
        lea eax, ds:[edx*4]
        push ebp
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d1baa0
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        je public_6d28a6c
        public_6d28a55 : nop
        push edi
        push ebx
        mov ecx, esi
        call public_6d3ea20
        add edi, 4
        add ebx, 4
        cmp edi, ebp
        jne public_6d28a55
        mov eax, dword ptr ss : [esp+0x1C]
        public_6d28a6c : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        add edi, eax
        test edx, edx
        pop ebp
        mov dword ptr ds : [esi+0xC], edi
        pop ebx
        jne public_6d28a85
        xor ecx, ecx
        jmp public_6d28a8a
        public_6d28a85 : nop
        sub ecx, edx
        sar ecx, 2
        public_6d28a8a : nop
        lea ecx, ds:[eax+ecx*4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], eax
        public_6d28a93 : nop
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+8]
        push edx
        push 1
        push eax
        mov ecx, esi
        call public_6d3eca0
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d28940)
    }
}

#undef public_6d2897c
#undef public_6d28993
#undef public_6d289ad
#undef public_6d289c0
#undef public_6d289e0
#undef public_6d289e8
#undef public_6d289f3
#undef public_6d289fb
#undef public_6d28a0e
#undef public_6d28a16
#undef public_6d28a24
#undef public_6d28a2c
#undef public_6d28a55
#undef public_6d28a6c
#undef public_6d28a85
#undef public_6d28a8a
#undef public_6d28a93
