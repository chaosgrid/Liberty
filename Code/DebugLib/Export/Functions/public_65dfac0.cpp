#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dfd53);

#define public_65dfadc _public_65dfadc
#define public_65dfb0e _public_65dfb0e
#define public_65dfb13 _public_65dfb13
#define public_65dfb27 _public_65dfb27
#define public_65dfb3c _public_65dfb3c
#define public_65dfb44 _public_65dfb44
#define public_65dfb6f _public_65dfb6f
#define public_65dfb7f _public_65dfb7f
#define public_65dfb89 _public_65dfb89
#define public_65dfb8b _public_65dfb8b

PROC_DECLARE(0x65dfac0, internal_65dfac0, public_65dfac0);
extern "C" NAKED register_t __cdecl internal_65dfac0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push edi
        push esi
        push ebx
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+8]
        lea eax, ds : [public_65e63e0]
        cmp dword ptr ds : [eax+8], 0
        jne public_65dfb13
        mov al, 0xFF
        mov edi, edi
        public_65dfadc : nop
        or al, al
        je public_65dfb0e
        mov al, byte ptr ds : [esi]
        inc esi
        mov ah, byte ptr ds : [edi]
        inc edi
        cmp ah, al
        je public_65dfadc
        sub al, 0x41
        cmp al, 0x1A
        sbb cl, cl
        and cl, 0x20
        add al, cl
        add al, 0x41
        xchg ah, al
        sub al, 0x41
        cmp al, 0x1A
        sbb cl, cl
        and cl, 0x20
        add al, cl
        add al, 0x41
        cmp al, ah
        je public_65dfadc
        sbb al, al
        sbb al, 0xFF
        public_65dfb0e : nop
        movsx eax, al
        jmp public_65dfb8b
        public_65dfb13 : nop
        lock inc dword ptr ds : [public_65e66c8]
        cmp dword ptr ds : [public_65e66c4], 0
        jg public_65dfb27
        push 0
        jmp public_65dfb3c
        public_65dfb27 : nop
        lock dec dword ptr ds : [public_65e66c8]
        push 0x13
        call public_65dceab
        mov dword ptr ss : [esp], 1
        public_65dfb3c : nop
        mov eax, 0xFF
        xor ebx, ebx
        nop 
        public_65dfb44 : nop
        or al, al
        je public_65dfb6f
        mov al, byte ptr ds : [esi]
        inc esi
        mov bl, byte ptr ds : [edi]
        inc edi
        cmp al, bl
        je public_65dfb44
        push eax
        push ebx
        call public_65dfd53
        mov ebx, eax
        add esp, 4
        call public_65dfd53
        add esp, 4
        cmp bl, al
        je public_65dfb44
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65dfb6f : nop
        mov ebx, eax
        pop eax
        or eax, eax
        jne public_65dfb7f
        lock dec dword ptr ds : [public_65e66c8]
        jmp public_65dfb89
        public_65dfb7f : nop
        push 0x13
        call public_65dcf0c
        add esp, 4
        public_65dfb89 : nop
        mov eax, ebx
        public_65dfb8b : nop
        pop ebx
        pop esi
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dfac0)
    }
}

#undef public_65dfadc
#undef public_65dfb0e
#undef public_65dfb13
#undef public_65dfb27
#undef public_65dfb3c
#undef public_65dfb44
#undef public_65dfb6f
#undef public_65dfb7f
#undef public_65dfb89
#undef public_65dfb8b
