#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec7fb0 _public_6ec7fb0
#define public_6ec7fd5 _public_6ec7fd5
#define public_6ec7fdb _public_6ec7fdb
#define public_6ec7fed _public_6ec7fed
#define public_6ec7ff3 _public_6ec7ff3
#define public_6ec800d _public_6ec800d
#define public_6ec8018 _public_6ec8018

PROC_DECLARE(0x6ec7fa0, internal_6ec7fa0, public_6ec7fa0);
extern "C" NAKED register_t __cdecl internal_6ec7fa0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        jbe public_6ec7fb0
        dec eax
        mov dword ptr ds : [esi+0x18], eax
        public_6ec7fb0 : nop
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        jne public_6ec8018
        mov dword ptr ds : [esi+0x18], 1
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6ed2bb8
        jne public_6ec7fd5
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [public_6ed57e4], eax
        jmp public_6ec7fdb
        public_6ec7fd5 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x10], ecx
        public_6ec7fdb : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_6ec7fed
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [public_6ed57e8], edx
        jmp public_6ec7ff3
        public_6ec7fed : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+0x14], ecx
        public_6ec7ff3 : nop
        dec dword ptr ds : [public_6ed57ec]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ec800d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+4], 0
        public_6ec800d : nop
        push esi
        call public_6ed0c50
        add esp, 4
        xor eax, eax
        public_6ec8018 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec7fa0)
    }
}

#undef public_6ec7fb0
#undef public_6ec7fd5
#undef public_6ec7fdb
#undef public_6ec7fed
#undef public_6ec7ff3
#undef public_6ec800d
#undef public_6ec8018
