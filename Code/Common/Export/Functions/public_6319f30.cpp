#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319f30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6319f48 _public_6319f48
#define public_6319f64 _public_6319f64
#define public_6319f73 _public_6319f73
#define public_6319f86 _public_6319f86
#define public_6319fbd _public_6319fbd
#define public_6319fca _public_6319fca
#define public_6319fe0 _public_6319fe0
#define public_631a000 _public_631a000
#define public_631a009 _public_631a009
#define public_631a01e _public_631a01e
#define public_631a032 _public_631a032
#define public_631a04e _public_631a04e
#define public_631a06f _public_631a06f
#define public_631a080 _public_631a080

PROC_DECLARE(0x6319f30, internal_6319f30, public_6319f30);
extern "C" NAKED register_t __cdecl internal_6319f30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp eax, edi
        je public_631a080
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        public_6319f48 : nop
        mov eax, dword ptr ds : [public_63991c0]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi-8]
        sub edi, 0x10
        mov ebx, eax
        sub ebp, 0x10
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], edi
        jae public_6319f64
        mov ebx, esi
        public_6319f64 : nop
        cmp ebp, edi
        jne public_6319fca
        cmp dword ptr ss : [ebp+8], ebx
        jae public_6319f73
        call dword ptr ds : [public_63991c4]
        public_6319f73 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6319f86
        mov esi, eax
        public_6319f86 : nop
        test esi, esi
        jbe public_6319fbd
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6399330]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6319fbd
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_6319fbd : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        jmp public_631a06f
        public_6319fca : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_631a032
        cmp ebx, eax
        jne public_631a032
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6319fe0
        mov eax, dword ptr ds : [public_63991d0]
        public_6319fe0 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_631a032
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_631a009
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_631a000
        cmp cl, 0xFF
        je public_631a000
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_631a009
        public_631a000 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_631a009 : nop
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_631a01e
        mov eax, dword ptr ds : [public_63991d0]
        public_631a01e : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_631a06f
        public_631a032 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631a06f
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_631a04e
        mov esi, dword ptr ds : [public_63991d0]
        public_631a04e : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_631a06f : nop
        cmp edi, dword ptr ss : [esp+0x14]
        jne public_6319f48
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        ret 
        public_631a080 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6319f30)
    }
}

#undef public_6319f48
#undef public_6319f64
#undef public_6319f73
#undef public_6319f86
#undef public_6319fbd
#undef public_6319fca
#undef public_6319fe0
#undef public_631a000
#undef public_631a009
#undef public_631a01e
#undef public_631a032
#undef public_631a04e
#undef public_631a06f
#undef public_631a080
