#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad7ddb);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7e39);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7e94);

#define public_6ad7ebb _public_6ad7ebb
#define public_6ad7f08 _public_6ad7f08
#define public_6ad7f35 _public_6ad7f35
#define public_6ad7f3a _public_6ad7f3a
#define public_6ad7f4f _public_6ad7f4f

PROC_DECLARE(0x6ad7e94, internal_6ad7e94, public_6ad7e94);
extern "C" NAKED register_t __cdecl internal_6ad7e94()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        xor edx, edx
        cmp eax, edx
        push esi
        mov dword ptr ss : [ebp-4], 0x404E
        mov dword ptr ds : [ebx], edx
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], edx
        jbe public_6ad7f08
        push edi
        mov dword ptr ss : [ebp+0x10], eax
        public_6ad7ebb : nop
        mov esi, ebx
        lea edi, ss:[ebp-0x10]
        movsd 
        movsd 
        push ebx
        movsd 
        call public_6ad7e39
        push ebx
        call public_6ad7e39
        lea eax, ss:[ebp-0x10]
        push eax
        push ebx
        call public_6ad7ddb
        push ebx
        call public_6ad7e39
        mov eax, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-0xC], 0
        and dword ptr ss : [ebp-8], 0
        movsx eax, byte ptr ds : [eax]
        mov dword ptr ss : [ebp-0x10], eax
        lea eax, ss:[ebp-0x10]
        push eax
        push ebx
        call public_6ad7ddb
        add esp, 0x1C
        inc dword ptr ss : [ebp+8]
        dec dword ptr ss : [ebp+0x10]
        jne public_6ad7ebb
        xor edx, edx
        pop edi
        public_6ad7f08 : nop
        cmp dword ptr ds : [ebx+8], edx
        jne public_6ad7f35
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, ecx
        shr eax, 0x10
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [ebx]
        mov esi, eax
        shr esi, 0x10
        shl ecx, 0x10
        or esi, ecx
        shl eax, 0x10
        add dword ptr ss : [ebp-4], 0xFFF0
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx], eax
        jmp public_6ad7f08
        public_6ad7f35 : nop
        mov esi, 0x8000
        public_6ad7f3a : nop
        test dword ptr ds : [ebx+8], esi
        jne public_6ad7f4f
        push ebx
        call public_6ad7e39
        add dword ptr ss : [ebp-4], 0xFFFF
        pop ecx
        jmp public_6ad7f3a
        public_6ad7f4f : nop
        mov ax, word ptr ss : [ebp-4]
        pop esi
        mov word ptr ds : [ebx+0xA], ax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad7e94)
    }
}

#undef public_6ad7ebb
#undef public_6ad7f08
#undef public_6ad7f35
#undef public_6ad7f3a
#undef public_6ad7f4f
