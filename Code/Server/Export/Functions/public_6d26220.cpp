#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d228d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d26220);

#define public_6d26256 _public_6d26256
#define public_6d2625f _public_6d2625f
#define public_6d26287 _public_6d26287
#define public_6d26298 _public_6d26298
#define public_6d262a1 _public_6d262a1
#define public_6d262c9 _public_6d262c9
#define public_6d262dc _public_6d262dc
#define public_6d262e5 _public_6d262e5
#define public_6d26309 _public_6d26309
#define public_6d2631c _public_6d2631c
#define public_6d26325 _public_6d26325
#define public_6d26349 _public_6d26349

PROC_DECLARE(0x6d26220, internal_6d26220, public_6d26220);
extern "C" NAKED register_t __cdecl internal_6d26220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        and eax, 0x8008
        cmp eax, 0x8000
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        ja public_6d26309
        je public_6d262c9
        test eax, eax
        mov eax, dword ptr ds : [esi]
        je public_6d26287
        test eax, eax
        je public_6d26256
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0xC
        cmp eax, ecx
        jbe public_6d2625f
        public_6d26256 : nop
        push 0xC
        mov ecx, esi
        call public_6d1bd20
        public_6d2625f : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0xC
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d26349
        mov ecx, esi
        call public_6d228d0
        mov dword ptr ds : [esi], offset public_6d690bc
        mov eax, esi
        pop esi
        ret 
        public_6d26287 : nop
        test eax, eax
        je public_6d26298
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add ecx, 0xC
        cmp ecx, eax
        jbe public_6d262a1
        public_6d26298 : nop
        push 0xC
        mov ecx, esi
        call public_6d1bd20
        public_6d262a1 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[edx+eax+8]
        add edx, 0xC
        test ecx, ecx
        mov dword ptr ds : [eax+4], edx
        je public_6d26349
        mov dword ptr ds : [ecx+4], 0
        mov dword ptr ds : [ecx], offset public_6d69094
        mov eax, ecx
        pop esi
        ret 
        public_6d262c9 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d262dc
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add edx, 0xC
        cmp edx, eax
        jbe public_6d262e5
        public_6d262dc : nop
        push 0xC
        mov ecx, esi
        call public_6d1bd20
        public_6d262e5 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0xC
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d26349
        mov ecx, esi
        call public_6d228d0
        mov dword ptr ds : [esi], offset public_6d6906c
        mov eax, esi
        pop esi
        ret 
        public_6d26309 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d2631c
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0xC
        cmp eax, ecx
        jbe public_6d26325
        public_6d2631c : nop
        push 0xC
        mov ecx, esi
        call public_6d1bd20
        public_6d26325 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0xC
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d26349
        mov ecx, esi
        call public_6d228d0
        mov dword ptr ds : [esi], offset public_6d69044
        mov eax, esi
        pop esi
        ret 
        public_6d26349 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d26220)
    }
}

#undef public_6d26256
#undef public_6d2625f
#undef public_6d26287
#undef public_6d26298
#undef public_6d262a1
#undef public_6d262c9
#undef public_6d262dc
#undef public_6d262e5
#undef public_6d26309
#undef public_6d2631c
#undef public_6d26325
#undef public_6d26349
