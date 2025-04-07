#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f34100);

#define public_6f3415d _public_6f3415d
#define public_6f34171 _public_6f34171
#define public_6f34181 _public_6f34181
#define public_6f34195 _public_6f34195
#define public_6f341a9 _public_6f341a9
#define public_6f341b7 _public_6f341b7
#define public_6f341bb _public_6f341bb
#define public_6f341dd _public_6f341dd

PROC_DECLARE(0x6f34100, internal_6f34100, public_6f34100);
extern "C" NAKED register_t __cdecl internal_6f34100()
{
    __asm
    {
        sub esp, 0x10
        push edi
        mov edi, ecx
        mov edx, dword ptr ds : [edi+0x1B8]
        dec edx
        mov eax, edx
        test eax, eax
        mov dword ptr ds : [edi+0x1B8], edx
        jg public_6f341dd
        mov eax, dword ptr ds : [edi+0x15C]
        mov ecx, dword ptr ds : [edi+4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 1
        je public_6f341bb
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        cmp eax, 3
        jne public_6f3415d
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x17C]
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_6f341bb
        public_6f3415d : nop
        cmp eax, 4
        jne public_6f34171
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+0x17C]
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6f341bb
        public_6f34171 : nop
        cmp eax, 5
        jne public_6f34181
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+0x17C]
        jmp public_6f341b7
        public_6f34181 : nop
        cmp eax, 7
        jne public_6f34195
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x10C]
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_6f341bb
        public_6f34195 : nop
        cmp eax, 8
        jne public_6f341a9
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+0x1C8]
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6f341bb
        public_6f341a9 : nop
        cmp eax, 9
        jne public_6f341bb
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+0x1C8]
        public_6f341b7 : nop
        mov dword ptr ss : [esp+0x14], edx
        public_6f341bb : nop
        mov eax, dword ptr ds : [edi+0x170]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0xC]
        push 0x1006
        push edx
        mov dword ptr ss : [esp+0x14], eax
        call public_6f24070
        add esp, 0xC
        pop esi
        public_6f341dd : nop
        pop edi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f34100)
    }
}

#undef public_6f3415d
#undef public_6f34171
#undef public_6f34181
#undef public_6f34195
#undef public_6f341a9
#undef public_6f341b7
#undef public_6f341bb
#undef public_6f341dd
