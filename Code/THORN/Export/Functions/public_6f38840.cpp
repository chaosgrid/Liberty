#include "THORN-PCH.h"


#define public_6f38860 _public_6f38860
#define public_6f38880 _public_6f38880
#define public_6f3888d _public_6f3888d
#define public_6f38895 _public_6f38895
#define public_6f3889f _public_6f3889f
#define public_6f388a6 _public_6f388a6
#define public_6f388aa _public_6f388aa
#define public_6f388b7 _public_6f388b7

PROC_DECLARE(0x6f38840, internal_6f38840, public_6f38840);
extern "C" NAKED register_t __cdecl internal_6f38840()
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
        jbe public_6f388aa
        lea esp, ss:[esp]
        public_6f38860 : nop
        cmp eax, esi
        je public_6f388b7
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        inc edx
        test bl, bl
        jne public_6f3888d
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6f388a6
        lea ebx, ds:[ebx]
        public_6f38880 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6f38880
        jmp public_6f388a6
        public_6f3888d : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f3889f
        public_6f38895 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6f38895
        public_6f3889f : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6f388a6
        mov eax, ecx
        public_6f388a6 : nop
        cmp edx, edi
        jb public_6f38860
        public_6f388aa : nop
        cmp eax, esi
        je public_6f388b7
        mov eax, dword ptr ds : [eax+0xC]
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6f388b7 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f38840)
    }
}

#undef public_6f38860
#undef public_6f38880
#undef public_6f3888d
#undef public_6f38895
#undef public_6f3889f
#undef public_6f388a6
#undef public_6f388aa
#undef public_6f388b7
