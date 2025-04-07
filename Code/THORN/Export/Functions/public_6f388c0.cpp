#include "THORN-PCH.h"


#define public_6f388e0 _public_6f388e0
#define public_6f38900 _public_6f38900
#define public_6f3890d _public_6f3890d
#define public_6f38915 _public_6f38915
#define public_6f3891f _public_6f3891f
#define public_6f38926 _public_6f38926
#define public_6f3892a _public_6f3892a
#define public_6f3893e _public_6f3893e

PROC_DECLARE(0x6f388c0, internal_6f388c0, public_6f388c0);
extern "C" NAKED register_t __cdecl internal_6f388c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor edx, edx
        test edi, edi
        jbe public_6f3892a
        lea esp, ss:[esp]
        public_6f388e0 : nop
        cmp eax, esi
        je public_6f3893e
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        inc edx
        test bl, bl
        jne public_6f3890d
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6f38926
        lea ebx, ds:[ebx]
        public_6f38900 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6f38900
        jmp public_6f38926
        public_6f3890d : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f3891f
        public_6f38915 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6f38915
        public_6f3891f : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6f38926
        mov eax, ecx
        public_6f38926 : nop
        cmp edx, edi
        jb public_6f388e0
        public_6f3892a : nop
        cmp eax, esi
        je public_6f3893e
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x1C]
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6f3893e : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f388c0)
    }
}

#undef public_6f388e0
#undef public_6f38900
#undef public_6f3890d
#undef public_6f38915
#undef public_6f3891f
#undef public_6f38926
#undef public_6f3892a
#undef public_6f3893e
