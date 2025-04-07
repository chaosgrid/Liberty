#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46304);

#define public_6d46322 _public_6d46322
#define public_6d46346 _public_6d46346
#define public_6d4635a _public_6d4635a
#define public_6d46380 _public_6d46380
#define public_6d46394 _public_6d46394

PROC_DECLARE(0x6d46304, internal_6d46304, public_6d46304);
extern "C" NAKED register_t __cdecl internal_6d46304()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        and dword ptr ss : [ebp-8], 0
        cmp dword ptr ds : [ebx+0x120], 0
        jle public_6d46394
        lea eax, ds:[ebx+0x124]
        push esi
        mov dword ptr ss : [ebp-4], eax
        push edi
        public_6d46322 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax+0x4C], 0
        mov dword ptr ss : [ebp-0xC], eax
        jne public_6d46380
        mov esi, dword ptr ds : [eax+0x10]
        test esi, esi
        jl public_6d46346
        cmp esi, 4
        jge public_6d46346
        cmp dword ptr ds : [ebx+esi*4+0x90], 0
        jne public_6d4635a
        public_6d46346 : nop
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+0x14], 0x33
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+0x18], esi
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax]
        pop ecx
        public_6d4635a : nop
        mov eax, dword ptr ds : [ebx+4]
        push 0x82
        push 1
        push ebx
        call dword ptr ds : [eax]
        mov esi, dword ptr ds : [ebx+esi*4+0x90]
        add esp, 0xC
        push 0x20
        pop ecx
        mov edi, eax
        rep movsd
        mov ecx, dword ptr ss : [ebp-0xC]
        movsw 
        mov dword ptr ds : [ecx+0x4C], eax
        public_6d46380 : nop
        inc dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        add dword ptr ss : [ebp-4], 4
        cmp eax, dword ptr ds : [ebx+0x120]
        jl public_6d46322
        pop edi
        pop esi
        public_6d46394 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d46304)
    }
}

#undef public_6d46322
#undef public_6d46346
#undef public_6d4635a
#undef public_6d46380
#undef public_6d46394
