#include "Freelancer-PCH.h"


#define public_53e794 _public_53e794
#define public_53e7bb _public_53e7bb
#define public_53e7bd _public_53e7bd
#define public_53e7d0 _public_53e7d0
#define public_53e7f8 _public_53e7f8
#define public_53e7fa _public_53e7fa
#define public_53e802 _public_53e802
#define public_53e81b _public_53e81b
#define public_53e81d _public_53e81d
#define public_53e838 _public_53e838
#define public_53e83a _public_53e83a
#define public_53e85d _public_53e85d
#define public_53e85f _public_53e85f
#define public_53e87a _public_53e87a
#define public_53e87c _public_53e87c
#define public_53e87f _public_53e87f
#define public_53e885 _public_53e885
#define public_53e88f _public_53e88f

PROC_DECLARE(0x53e770, internal_53e770, public_53e770);
extern "C" NAKED register_t __cdecl internal_53e770()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53e88f
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_53e88f
        public_53e794 : nop
        mov cx, word ptr ds : [edi+8]
        mov edx, dword ptr ds : [public_5c65ac]
        cmp cx, word ptr ds : [edx]
        jne public_53e7d0
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_53e7bb
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_53e7bd
        public_53e7bb : nop
        xor eax, eax
        public_53e7bd : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x98]
        jmp public_53e885
        public_53e7d0 : nop
        fld dword ptr ds : [edi+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ds : [esi+0x10]
        jne public_53e802
        test eax, eax
        je public_53e7f8
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        je public_53e7fa
        public_53e7f8 : nop
        xor eax, eax
        public_53e7fa : nop
        fld dword ptr ds : [edi+0xC]
        jmp public_53e87f
        public_53e802 : nop
        test eax, eax
        je public_53e81b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_53e81b
        mov ecx, eax
        jmp public_53e81d
        public_53e81b : nop
        xor ecx, ecx
        public_53e81d : nop
        test eax, eax
        mov ecx, dword ptr ds : [ecx+0xF0]
        je public_53e838
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        je public_53e83a
        public_53e838 : nop
        xor eax, eax
        public_53e83a : nop
        dec ecx
        mov dword ptr ds : [eax+0xF0], ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_53e85d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_53e85d
        mov ecx, eax
        jmp public_53e85f
        public_53e85d : nop
        xor ecx, ecx
        public_53e85f : nop
        test eax, eax
        mov ecx, dword ptr ds : [ecx+0xEC]
        je public_53e87a
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        je public_53e87c
        public_53e87a : nop
        xor eax, eax
        public_53e87c : nop
        fld dword ptr ds : [ecx+0x1C]
        public_53e87f : nop
        fstp dword ptr ds : [eax+0xF4]
        public_53e885 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_53e794
        public_53e88f : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x53e770)
    }
}

#undef public_53e794
#undef public_53e7bb
#undef public_53e7bd
#undef public_53e7d0
#undef public_53e7f8
#undef public_53e7fa
#undef public_53e802
#undef public_53e81b
#undef public_53e81d
#undef public_53e838
#undef public_53e83a
#undef public_53e85d
#undef public_53e85f
#undef public_53e87a
#undef public_53e87c
#undef public_53e87f
#undef public_53e885
#undef public_53e88f
