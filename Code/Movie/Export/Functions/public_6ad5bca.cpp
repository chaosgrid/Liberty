#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acff18);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5414);

#define public_6ad5bde _public_6ad5bde
#define public_6ad5be4 _public_6ad5be4
#define public_6ad5be9 _public_6ad5be9
#define public_6ad5c1d _public_6ad5c1d
#define public_6ad5c24 _public_6ad5c24
#define public_6ad5c41 _public_6ad5c41
#define public_6ad5c61 _public_6ad5c61
#define public_6ad5c64 _public_6ad5c64

PROC_DECLARE(0x6ad5bca, internal_6ad5bca, public_6ad5bca);
extern "C" NAKED register_t __cdecl internal_6ad5bca()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae2440]
        push esi
        push 0x14
        test eax, eax
        pop esi
        jne public_6ad5bde
        mov eax, 0x200
        jmp public_6ad5be4
        public_6ad5bde : nop
        cmp eax, esi
        jge public_6ad5be9
        mov eax, esi
        public_6ad5be4 : nop
        mov dword ptr ds : [public_6ae2440], eax
        public_6ad5be9 : nop
        push 4
        push eax
        call public_6ad5414
        pop ecx
        mov dword ptr ds : [public_6ae1428], eax
        test eax, eax
        pop ecx
        jne public_6ad5c1d
        push 4
        push esi
        mov dword ptr ds : [public_6ae2440], esi
        call public_6ad5414
        pop ecx
        mov dword ptr ds : [public_6ae1428], eax
        test eax, eax
        pop ecx
        jne public_6ad5c1d
        push 0x1A
        call public_6acff18
        pop ecx
        public_6ad5c1d : nop
        xor ecx, ecx
        mov eax, offset public_6adfd10
        public_6ad5c24 : nop
        mov edx, dword ptr ds : [public_6ae1428]
        mov dword ptr ds : [ecx+edx], eax
        add eax, 0x20
        add ecx, 4
        cmp eax, offset public_6adff90
        jl public_6ad5c24
        xor ecx, ecx
        mov edx, offset public_6adfd20
        public_6ad5c41 : nop
        mov esi, ecx
        mov eax, ecx
        sar esi, 5
        and eax, 0x1F
        mov esi, dword ptr ds : [esi*4+public_6ae2480]
        lea eax, ds:[eax+eax*8]
        mov eax, dword ptr ds : [esi+eax*4]
        cmp eax, 0xFFFFFFFF
        je public_6ad5c61
        test eax, eax
        jne public_6ad5c64
        public_6ad5c61 : nop
        or dword ptr ds : [edx], 0xFFFFFFFF
        public_6ad5c64 : nop
        add edx, 0x20
        inc ecx
        cmp edx, offset public_6adfd80
        jl public_6ad5c41
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad5bca)
    }
}

#undef public_6ad5bde
#undef public_6ad5be4
#undef public_6ad5be9
#undef public_6ad5c1d
#undef public_6ad5c24
#undef public_6ad5c41
#undef public_6ad5c61
#undef public_6ad5c64
