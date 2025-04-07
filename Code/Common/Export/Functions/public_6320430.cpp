#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320430);
CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_63240a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6320465 _public_6320465
#define public_6320490 _public_6320490
#define public_63204b5 _public_63204b5
#define public_63204c0 _public_63204c0
#define public_63204d7 _public_63204d7
#define public_63204f9 _public_63204f9
#define public_6320512 _public_6320512
#define public_632052a _public_632052a

PROC_DECLARE(0x6320430, internal_6320430, public_6320430);
extern "C" NAKED register_t __cdecl internal_6320430()
{
    __asm
    {
        mov eax, dword ptr ds : [public_64018b8]
        test eax, eax
        mov byte ptr ds : [public_6401934], 1
        je public_6320465
        mov ecx, dword ptr ds : [public_64018c0]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 0x1000
        jae public_632052a
        public_6320465 : nop
        push ebx
        push ebp
        push esi
        push edi
        push 0x90000
        call public_6391d9c
        mov esi, dword ptr ds : [public_64018b8]
        mov ebp, eax
        mov eax, dword ptr ds : [public_64018bc]
        add esp, 4
        cmp esi, eax
        mov edi, ebp
        mov ebx, eax
        je public_63204b5
        nop 
        lea esp, ss:[esp]
        public_6320490 : nop
        push esi
        push edi
        call public_63240a0
        add esi, 0x90
        add esp, 8
        add edi, 0x90
        cmp esi, ebx
        jne public_6320490
        mov eax, dword ptr ds : [public_64018bc]
        mov esi, dword ptr ds : [public_64018b8]
        public_63204b5 : nop
        cmp esi, eax
        mov edi, eax
        je public_63204d7
        nop 
        lea esp, ss:[esp]
        public_63204c0 : nop
        mov ecx, esi
        call public_63221f0
        add esi, 0x90
        cmp esi, edi
        jne public_63204c0
        mov esi, dword ptr ds : [public_64018b8]
        public_63204d7 : nop
        push esi
        call public_6391d5a
        mov eax, dword ptr ds : [public_64018b8]
        add esp, 4
        test eax, eax
        lea ecx, ss:[ebp+0x90000]
        mov dword ptr ds : [public_64018c0], ecx
        jne public_63204f9
        xor edx, edx
        jmp public_6320512
        public_63204f9 : nop
        mov ecx, dword ptr ds : [public_64018bc]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6320512 : nop
        pop edi
        lea ecx, ds:[edx+edx*8]
        shl ecx, 4
        pop esi
        add ecx, ebp
        mov dword ptr ds : [public_64018b8], ebp
        pop ebp
        mov dword ptr ds : [public_64018bc], ecx
        pop ebx
        public_632052a : nop
        ret 
        UNREACHABLE_TRAP(0x6320430)
    }
}

#undef public_6320465
#undef public_6320490
#undef public_63204b5
#undef public_63204c0
#undef public_63204d7
#undef public_63204f9
#undef public_6320512
#undef public_632052a
