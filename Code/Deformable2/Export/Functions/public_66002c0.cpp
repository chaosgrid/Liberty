#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66002c0);

#define public_66002e0 _public_66002e0
#define public_66002fd _public_66002fd
#define public_6600310 _public_6600310
#define public_6600323 _public_6600323
#define public_6600335 _public_6600335
#define public_6600345 _public_6600345
#define public_6600354 _public_6600354
#define public_6600364 _public_6600364
#define public_6600375 _public_6600375
#define public_660038d _public_660038d

PROC_DECLARE(0x66002c0, internal_66002c0, public_66002c0);
extern "C" NAKED register_t __cdecl internal_66002c0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [public_6601018]
        push ebp
        mov ebp, dword ptr ds : [public_6601020]
        push esi
        push edi
        mov esi, offset public_6603720
        mov dword ptr ss : [esp+0x10], 0xA
        xor edi, edi
        public_66002e0 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_66002fd
        dec eax
        je public_6600323
        dec eax
        jne public_6600310
        public_66002fd : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6600310
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6600310 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6600345
        dec eax
        je public_6600335
        dec eax
        je public_6600345
        jmp public_6600354
        public_6600323 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6600310
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6600310
        public_6600335 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6600354
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6600354
        public_6600345 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6600354
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6600354 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6600364
        dec eax
        je public_660038d
        dec eax
        jne public_6600375
        public_6600364 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6600375
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6600375 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_66002e0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_660038d : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6600375
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6600375
        UNREACHABLE_TRAP(0x66002c0)
    }
}

#undef public_66002e0
#undef public_66002fd
#undef public_6600310
#undef public_6600323
#undef public_6600335
#undef public_6600345
#undef public_6600354
#undef public_6600364
#undef public_6600375
#undef public_660038d
