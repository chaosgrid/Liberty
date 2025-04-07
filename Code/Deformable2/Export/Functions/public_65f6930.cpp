#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f6930);

#define public_65f6978 _public_65f6978
#define public_65f699c _public_65f699c

PROC_DECLARE(0x65f6930, internal_65f6930, public_65f6930);
extern "C" NAKED register_t __cdecl internal_65f6930()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        push edi
        mov edi, dword ptr ds : [ecx+4]
        jl public_65f699c
        cmp esi, dword ptr ds : [ecx+0xC]
        jge public_65f699c
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+esi*4]
        mov al, byte ptr ds : [ecx+0x30]
        test al, 1
        mov dword ptr ds : [ecx+4], edx
        jne public_65f6978
        cmp edi, edx
        jne public_65f6978
        push ebx
        mov bl, al
        xor edx, edx
        xor bl, dl
        mov edx, dword ptr ds : [ecx+4]
        and bl, 1
        xor bl, al
        mov byte ptr ds : [ecx+0x30], bl
        pop ebx
        xor eax, eax
        cmp edi, edx
        pop edi
        mov dword ptr ds : [ecx+0x10], esi
        setne al
        pop esi
        ret 4
        public_65f6978 : nop
        push ebx
        mov bl, al
        mov edx, 1
        xor bl, dl
        and bl, dl
        mov edx, dword ptr ds : [ecx+4]
        xor bl, al
        mov byte ptr ds : [ecx+0x30], bl
        pop ebx
        xor eax, eax
        cmp edi, edx
        pop edi
        mov dword ptr ds : [ecx+0x10], esi
        setne al
        pop esi
        ret 4
        public_65f699c : nop
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        cmp edi, edx
        pop edi
        mov dword ptr ds : [ecx+0x10], esi
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f6930)
    }
}

#undef public_65f6978
#undef public_65f699c
