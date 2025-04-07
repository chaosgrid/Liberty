#include "Common-PCH.h"


#define public_62f12f1 _public_62f12f1
#define public_62f1314 _public_62f1314
#define public_62f1321 _public_62f1321
#define public_62f1330 _public_62f1330
#define public_62f133a _public_62f133a
#define public_62f1341 _public_62f1341
#define public_62f1349 _public_62f1349

PROC_DECLARE(0x62f12e0, internal_62f12e0, public_62f12e0);
extern "C" NAKED register_t __cdecl internal_62f12e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fcaec]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_62f1349
        mov edi, dword ptr ss : [esp+0xC]
        public_62f12f1 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax]
        test al, al
        je public_62f1349
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62f1321
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62f1341
        public_62f1314 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_62f1314
        jmp public_62f1341
        public_62f1321 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62f133a
        lea esp, ss:[esp]
        public_62f1330 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62f1330
        public_62f133a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62f1341
        mov esi, eax
        public_62f1341 : nop
        cmp esi, dword ptr ds : [public_63fcaec]
        jne public_62f12f1
        public_62f1349 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62f12e0)
    }
}

#undef public_62f12f1
#undef public_62f1314
#undef public_62f1321
#undef public_62f1330
#undef public_62f133a
#undef public_62f1341
#undef public_62f1349
