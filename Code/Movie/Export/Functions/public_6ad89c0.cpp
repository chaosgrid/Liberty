#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad38fb);

#define public_6ad89dc _public_6ad89dc
#define public_6ad8a0e _public_6ad8a0e
#define public_6ad8a13 _public_6ad8a13
#define public_6ad8a27 _public_6ad8a27
#define public_6ad8a3c _public_6ad8a3c
#define public_6ad8a44 _public_6ad8a44
#define public_6ad8a6f _public_6ad8a6f
#define public_6ad8a7f _public_6ad8a7f
#define public_6ad8a89 _public_6ad8a89
#define public_6ad8a8b _public_6ad8a8b

PROC_DECLARE(0x6ad89c0, internal_6ad89c0, public_6ad89c0);
extern "C" NAKED register_t __cdecl internal_6ad89c0()
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
        lea eax, ds : [public_6ae0f5c]
        cmp dword ptr ds : [eax+8], 0
        jne public_6ad8a13
        mov al, 0xFF
        mov edi, edi
        public_6ad89dc : nop
        or al, al
        je public_6ad8a0e
        mov al, byte ptr ds : [esi]
        inc esi
        mov ah, byte ptr ds : [edi]
        inc edi
        cmp ah, al
        je public_6ad89dc
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
        je public_6ad89dc
        sbb al, al
        sbb al, 0xFF
        public_6ad8a0e : nop
        movsx eax, al
        jmp public_6ad8a8b
        public_6ad8a13 : nop
        lock inc dword ptr ds : [public_6ae2588]
        cmp dword ptr ds : [public_6ae2584], 0
        jg public_6ad8a27
        push 0
        jmp public_6ad8a3c
        public_6ad8a27 : nop
        lock dec dword ptr ds : [public_6ae2588]
        push 0x13
        call public_6ad237a
        mov dword ptr ss : [esp], 1
        public_6ad8a3c : nop
        mov eax, 0xFF
        xor ebx, ebx
        nop 
        public_6ad8a44 : nop
        or al, al
        je public_6ad8a6f
        mov al, byte ptr ds : [esi]
        inc esi
        mov bl, byte ptr ds : [edi]
        inc edi
        cmp al, bl
        je public_6ad8a44
        push eax
        push ebx
        call public_6ad38fb
        mov ebx, eax
        add esp, 4
        call public_6ad38fb
        add esp, 4
        cmp bl, al
        je public_6ad8a44
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ad8a6f : nop
        mov ebx, eax
        pop eax
        or eax, eax
        jne public_6ad8a7f
        lock dec dword ptr ds : [public_6ae2588]
        jmp public_6ad8a89
        public_6ad8a7f : nop
        push 0x13
        call public_6ad23db
        add esp, 4
        public_6ad8a89 : nop
        mov eax, ebx
        public_6ad8a8b : nop
        pop ebx
        pop esi
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad89c0)
    }
}

#undef public_6ad89dc
#undef public_6ad8a0e
#undef public_6ad8a13
#undef public_6ad8a27
#undef public_6ad8a3c
#undef public_6ad8a44
#undef public_6ad8a6f
#undef public_6ad8a7f
#undef public_6ad8a89
#undef public_6ad8a8b
