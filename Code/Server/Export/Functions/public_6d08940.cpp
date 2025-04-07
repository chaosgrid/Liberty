#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d005d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d08940);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);

#define public_6d08962 _public_6d08962
#define public_6d0896b _public_6d0896b
#define public_6d0896d _public_6d0896d
#define public_6d0898d _public_6d0898d
#define public_6d08996 _public_6d08996
#define public_6d089ac _public_6d089ac
#define public_6d089b4 _public_6d089b4
#define public_6d089be _public_6d089be
#define public_6d089cf _public_6d089cf
#define public_6d089d6 _public_6d089d6
#define public_6d089ee _public_6d089ee
#define public_6d08a1d _public_6d08a1d
#define public_6d08a2a _public_6d08a2a

PROC_DECLARE(0x6d08940, internal_6d08940, public_6d08940);
extern "C" NAKED register_t __cdecl internal_6d08940()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov dword ptr ss : [esp+0x10], eax
        call public_6d005d0
        add esp, 4
        xor ecx, ecx
        public_6d08962 : nop
        test ecx, ecx
        jne public_6d0896b
        mov ecx, dword ptr ds : [esi+0x60]
        jmp public_6d0896d
        public_6d0896b : nop
        mov ecx, dword ptr ds : [ecx]
        public_6d0896d : nop
        test ecx, ecx
        je public_6d08a2a
        cmp dword ptr ds : [ecx+8], edi
        jne public_6d08962
        cmp dword ptr ds : [esi+0x60], ecx
        jne public_6d08996
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        mov dword ptr ds : [esi+0x60], eax
        jne public_6d0898d
        mov dword ptr ds : [esi+0x64], eax
        jmp public_6d089be
        public_6d0898d : nop
        mov dword ptr ds : [eax+4], 0
        jmp public_6d089be
        public_6d08996 : nop
        mov eax, dword ptr ds : [esi+0x64]
        cmp eax, ecx
        jne public_6d089b4
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [esi+0x64], eax
        jne public_6d089ac
        mov dword ptr ds : [esi+0x60], eax
        jmp public_6d089be
        public_6d089ac : nop
        mov dword ptr ds : [eax], 0
        jmp public_6d089be
        public_6d089b4 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        public_6d089be : nop
        mov al, byte ptr ds : [esi+0x68]
        test al, al
        je public_6d089cf
        mov edx, dword ptr ds : [esi+0x6C]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [esi+0x6C], ecx
        jmp public_6d089d6
        public_6d089cf : nop
        push 1
        call public_6d0f9a0
        public_6d089d6 : nop
        mov eax, dword ptr ds : [esi]
        push 0xFDFF
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6d089ee
        mov edx, dword ptr ds : [eax]
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_6d089ee : nop
        add esi, 0xE8
        mov ecx, esi
        call public_6d11850
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d08a1d
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_6d08a1d : nop
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_6d08a2a : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d08940)
    }
}

#undef public_6d08962
#undef public_6d0896b
#undef public_6d0896d
#undef public_6d0898d
#undef public_6d08996
#undef public_6d089ac
#undef public_6d089b4
#undef public_6d089be
#undef public_6d089cf
#undef public_6d089d6
#undef public_6d089ee
#undef public_6d08a1d
#undef public_6d08a2a
