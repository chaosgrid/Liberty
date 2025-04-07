#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_47e790);
CLANG_FORWARD_PROC_SYMBOL(public_587050);
CLANG_FORWARD_PROC_SYMBOL(public_587070);

#define public_47e7b6 _public_47e7b6
#define public_47e7e8 _public_47e7e8
#define public_47e810 _public_47e810
#define public_47e82f _public_47e82f
#define public_47e83b _public_47e83b
#define public_47e847 _public_47e847
#define public_47e874 _public_47e874
#define public_47e884 _public_47e884
#define public_47e888 _public_47e888
#define public_47e895 _public_47e895
#define public_47e8a1 _public_47e8a1
#define public_47e8af _public_47e8af
#define public_47e8bb _public_47e8bb
#define public_47e8d0 _public_47e8d0
#define public_47e8e6 _public_47e8e6
#define public_47e8f9 _public_47e8f9
#define public_47e900 _public_47e900
#define public_47e906 _public_47e906
#define public_47e90e _public_47e90e
#define public_47e911 _public_47e911

PROC_DECLARE(0x47e790, internal_47e790, public_47e790);
extern "C" NAKED register_t __cdecl internal_47e790()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x3A4], 0xFFFFFFFF
        push edi
        jne public_47e7b6
        pop edi
        mov dword ptr ds : [esi+0x4F4], 0
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 
        public_47e7b6 : nop
        mov eax, dword ptr ds : [esi+0x4F4]
        xor ebp, ebp
        cmp eax, ebp
        jne public_47e906
        mov al, byte ptr ds : [esi+0x35C]
        xor bl, bl
        test al, al
        mov byte ptr ss : [esp+0x13], bl
        je public_47e7e8
        cmp dword ptr ds : [esi+0x978], 2
        jne public_47e7e8
        mov byte ptr ss : [esp+0x13], 1
        mov bl, byte ptr ss : [esp+0x13]
        public_47e7e8 : nop
        test al, al
        mov dword ptr ss : [esp+0x14], ebp
        jne public_47e895
        mov ecx, dword ptr ds : [esi+0x330]
        call public_587050
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], eax
        jle public_47e895
        nop 
        lea esp, ss:[esp]
        public_47e810 : nop
        mov ecx, dword ptr ds : [esi+0x330]
        push ebp
        call public_587070
        test eax, eax
        je public_47e888
        mov ecx, dword ptr ds : [eax+0x18]
        xor edi, edi
        cmp ecx, 1
        jne public_47e82f
        mov edi, 2
        public_47e82f : nop
        test bl, bl
        jne public_47e83b
        cmp edi, dword ptr ds : [esi+0x32C]
        jne public_47e888
        public_47e83b : nop
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_47e847
        mov eax, dword ptr ds : [public_5c7078]
        public_47e847 : nop
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        mov dword ptr ss : [esp+0x20], eax
        add esp, 8
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ds:[esi+0x34C]
        call dword ptr ds : [public_5c638c]
        test bl, bl
        jne public_47e874
        cmp edi, dword ptr ds : [esi+0x32C]
        jne public_47e884
        public_47e874 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [esi+0x3A4]
        je public_47e911
        public_47e884 : nop
        inc dword ptr ss : [esp+0x14]
        public_47e888 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        inc ebp
        cmp ebp, eax
        jl public_47e810
        public_47e895 : nop
        mov ebx, dword ptr ds : [esi+0x350]
        mov ebp, dword ptr ds : [ebx]
        cmp ebp, ebx
        je public_47e900
        public_47e8a1 : nop
        lea edi, ss:[ebp+8]
        test edi, edi
        jne public_47e8af
        mov eax, 5
        jmp public_47e8bb
        public_47e8af : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_47e460
        add esp, 4
        public_47e8bb : nop
        cmp eax, 5
        je public_47e8f9
        mov cl, byte ptr ss : [esp+0x13]
        test cl, cl
        jne public_47e8d0
        cmp eax, dword ptr ds : [esi+0x32C]
        jne public_47e8f9
        public_47e8d0 : nop
        mov al, byte ptr ds : [edi+0xC]
        test al, al
        je public_47e8e6
        mov eax, dword ptr ds : [esi+0x32C]
        test eax, eax
        je public_47e8f9
        cmp eax, 2
        je public_47e8f9
        public_47e8e6 : nop
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [esi+0x3A4]
        je public_47e90e
        mov eax, edx
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        public_47e8f9 : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, ebx
        jne public_47e8a1
        public_47e900 : nop
        mov eax, dword ptr ds : [esi+0x4F4]
        public_47e906 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_47e90e : nop
        lea eax, ss:[ebp+8]
        public_47e911 : nop
        pop edi
        mov dword ptr ds : [esi+0x4F4], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x47e790)
    }
}

#undef public_47e7b6
#undef public_47e7e8
#undef public_47e810
#undef public_47e82f
#undef public_47e83b
#undef public_47e847
#undef public_47e874
#undef public_47e884
#undef public_47e888
#undef public_47e895
#undef public_47e8a1
#undef public_47e8af
#undef public_47e8bb
#undef public_47e8d0
#undef public_47e8e6
#undef public_47e8f9
#undef public_47e900
#undef public_47e906
#undef public_47e90e
#undef public_47e911
