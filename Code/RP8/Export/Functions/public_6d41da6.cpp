#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41da6);

#define public_6d41dad _public_6d41dad
#define public_6d41dce _public_6d41dce
#define public_6d41dd3 _public_6d41dd3
#define public_6d41dfb _public_6d41dfb
#define public_6d41e0f _public_6d41e0f
#define public_6d41e2a _public_6d41e2a

PROC_DECLARE(0x6d41da6, internal_6d41da6, public_6d41da6);
extern "C" NAKED register_t __cdecl internal_6d41da6()
{
    __asm
    {
        push esi
        push edi
        xor eax, eax
        xor esi, esi
        push ebx
        public_6d41dad : nop
        mov edx, dword ptr ss : [esp+0x10]
        movzx edx, byte ptr ds : [edx+esi+0x10C]
        inc esi
        cmp edx, 0x29
        jl public_6d41dd3
        cmp edx, 0x7A
        jg public_6d41dd3
        cmp edx, 0x5A
        jle public_6d41dce
        cmp edx, 0x61
        jl public_6d41dd3
        public_6d41dce : nop
        mov byte ptr ds : [eax+ecx], dl
        jmp public_6d41dfb
        public_6d41dd3 : nop
        mov byte ptr ds : [eax+ecx], 0x5B
        mov edi, edx
        sar edi, 4
        and edi, 0xF
        mov bl, byte ptr ds : [edi+public_6d60cc0]
        inc eax
        mov byte ptr ds : [eax+ecx], bl
        and edx, 0xF
        mov dl, byte ptr ds : [edx+public_6d60cc0]
        inc eax
        mov byte ptr ds : [eax+ecx], dl
        inc eax
        mov byte ptr ds : [eax+ecx], 0x5D
        public_6d41dfb : nop
        inc eax
        cmp esi, 4
        jl public_6d41dad
        xor edx, edx
        cmp dword ptr ss : [esp+0x14], edx
        pop ebx
        jne public_6d41e0f
        mov byte ptr ds : [eax+ecx], dl
        jmp public_6d41e2a
        public_6d41e0f : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+ecx], 0x3A
        inc eax
        mov byte ptr ds : [eax+ecx], 0x20
        lea eax, ds:[eax+ecx+1]
        push 0x10
        pop ecx
        mov edi, eax
        rep movsd
        mov byte ptr ds : [eax+0x3F], dl
        public_6d41e2a : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d41da6)
    }
}

#undef public_6d41dad
#undef public_6d41dce
#undef public_6d41dd3
#undef public_6d41dfb
#undef public_6d41e0f
#undef public_6d41e2a
