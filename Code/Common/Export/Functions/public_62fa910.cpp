#include "Common-PCH.h"


#define public_62fa921 _public_62fa921
#define public_62fa944 _public_62fa944
#define public_62fa951 _public_62fa951
#define public_62fa960 _public_62fa960
#define public_62fa96a _public_62fa96a
#define public_62fa971 _public_62fa971
#define public_62fa979 _public_62fa979

PROC_DECLARE(0x62fa910, internal_62fa910, public_62fa910);
extern "C" NAKED register_t __cdecl internal_62fa910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fca88]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_62fa979
        mov edi, dword ptr ss : [esp+0xC]
        public_62fa921 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax]
        test al, al
        je public_62fa979
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62fa951
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62fa971
        public_62fa944 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_62fa944
        jmp public_62fa971
        public_62fa951 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62fa96a
        lea esp, ss:[esp]
        public_62fa960 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62fa960
        public_62fa96a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62fa971
        mov esi, eax
        public_62fa971 : nop
        cmp esi, dword ptr ds : [public_63fca88]
        jne public_62fa921
        public_62fa979 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62fa910)
    }
}

#undef public_62fa921
#undef public_62fa944
#undef public_62fa951
#undef public_62fa960
#undef public_62fa96a
#undef public_62fa971
#undef public_62fa979
