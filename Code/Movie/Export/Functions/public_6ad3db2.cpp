#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf910);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3db2);

#define public_6ad3dd5 _public_6ad3dd5
#define public_6ad3de1 _public_6ad3de1
#define public_6ad3de4 _public_6ad3de4
#define public_6ad3def _public_6ad3def
#define public_6ad3dfb _public_6ad3dfb
#define public_6ad3e06 _public_6ad3e06
#define public_6ad3e08 _public_6ad3e08
#define public_6ad3e12 _public_6ad3e12
#define public_6ad3e24 _public_6ad3e24

PROC_DECLARE(0x6ad3db2, internal_6ad3db2, public_6ad3db2);
extern "C" NAKED register_t __cdecl internal_6ad3db2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edx+0xC]
        push edi
        lea edi, ds:[esi+1]
        mov byte ptr ds : [esi], 0x30
        test ebx, ebx
        mov eax, edi
        jle public_6ad3def
        mov dword ptr ss : [ebp+8], ebx
        xor ebx, ebx
        public_6ad3dd5 : nop
        mov dl, byte ptr ds : [ecx]
        test dl, dl
        je public_6ad3de1
        movsx edx, dl
        inc ecx
        jmp public_6ad3de4
        public_6ad3de1 : nop
        push 0x30
        pop edx
        public_6ad3de4 : nop
        mov byte ptr ds : [eax], dl
        inc eax
        dec dword ptr ss : [ebp+8]
        jne public_6ad3dd5
        mov edx, dword ptr ss : [ebp+0x10]
        public_6ad3def : nop
        and byte ptr ds : [eax], 0
        test ebx, ebx
        jl public_6ad3e08
        cmp byte ptr ds : [ecx], 0x35
        jl public_6ad3e08
        public_6ad3dfb : nop
        dec eax
        cmp byte ptr ds : [eax], 0x39
        jne public_6ad3e06
        mov byte ptr ds : [eax], 0x30
        jmp public_6ad3dfb
        public_6ad3e06 : nop
        inc byte ptr ds : [eax]
        public_6ad3e08 : nop
        cmp byte ptr ds : [esi], 0x31
        jne public_6ad3e12
        inc dword ptr ds : [edx+4]
        jmp public_6ad3e24
        public_6ad3e12 : nop
        push edi
        call public_6ad23f0
        inc eax
        push eax
        push edi
        push esi
        call public_6acf910
        add esp, 0x10
        public_6ad3e24 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad3db2)
    }
}

#undef public_6ad3dd5
#undef public_6ad3de1
#undef public_6ad3de4
#undef public_6ad3def
#undef public_6ad3dfb
#undef public_6ad3e06
#undef public_6ad3e08
#undef public_6ad3e12
#undef public_6ad3e24
