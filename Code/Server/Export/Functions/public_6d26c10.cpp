#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d228d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d26c10);

#define public_6d26c47 _public_6d26c47
#define public_6d26c50 _public_6d26c50
#define public_6d26c7f _public_6d26c7f
#define public_6d26c90 _public_6d26c90
#define public_6d26c99 _public_6d26c99
#define public_6d26cc8 _public_6d26cc8
#define public_6d26cdb _public_6d26cdb
#define public_6d26ce4 _public_6d26ce4
#define public_6d26d0f _public_6d26d0f
#define public_6d26d22 _public_6d26d22
#define public_6d26d2b _public_6d26d2b
#define public_6d26d56 _public_6d26d56

PROC_DECLARE(0x6d26c10, internal_6d26c10, public_6d26c10);
extern "C" NAKED register_t __cdecl internal_6d26c10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        and eax, 0x8001
        cmp eax, 0x8000
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        ja public_6d26d0f
        je public_6d26cc8
        sub eax, 0
        mov eax, dword ptr ds : [esi]
        je public_6d26c7f
        test eax, eax
        je public_6d26c47
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x10
        cmp eax, ecx
        jbe public_6d26c50
        public_6d26c47 : nop
        push 0x10
        mov ecx, esi
        call public_6d1bd20
        public_6d26c50 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x10
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d26d56
        mov ecx, esi
        call public_6d228d0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6d693dc
        mov dword ptr ds : [esi+8], ecx
        mov eax, esi
        pop esi
        ret 
        public_6d26c7f : nop
        test eax, eax
        je public_6d26c90
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add edx, 0x10
        cmp edx, eax
        jbe public_6d26c99
        public_6d26c90 : nop
        push 0x10
        mov ecx, esi
        call public_6d1bd20
        public_6d26c99 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x10
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d26d56
        mov ecx, esi
        call public_6d228d0
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], offset public_6d693b4
        mov eax, esi
        pop esi
        ret 
        public_6d26cc8 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d26cdb
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add ecx, 0x10
        cmp ecx, eax
        jbe public_6d26ce4
        public_6d26cdb : nop
        push 0x10
        mov ecx, esi
        call public_6d1bd20
        public_6d26ce4 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x10
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d26d56
        mov ecx, esi
        call public_6d228d0
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], offset public_6d6938c
        mov eax, esi
        pop esi
        ret 
        public_6d26d0f : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d26d22
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x10
        cmp eax, ecx
        jbe public_6d26d2b
        public_6d26d22 : nop
        push 0x10
        mov ecx, esi
        call public_6d1bd20
        public_6d26d2b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x10
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d26d56
        mov ecx, esi
        call public_6d228d0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6d69364
        mov dword ptr ds : [esi+8], ecx
        mov eax, esi
        pop esi
        ret 
        public_6d26d56 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d26c10)
    }
}

#undef public_6d26c47
#undef public_6d26c50
#undef public_6d26c7f
#undef public_6d26c90
#undef public_6d26c99
#undef public_6d26cc8
#undef public_6d26cdb
#undef public_6d26ce4
#undef public_6d26d0f
#undef public_6d26d22
#undef public_6d26d2b
#undef public_6d26d56
