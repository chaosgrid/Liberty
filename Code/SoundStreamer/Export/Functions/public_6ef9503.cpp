#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef948e);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9503);
CLANG_FORWARD_PROC_SYMBOL(public_6efa8e3);

#define public_6ef9530 _public_6ef9530
#define public_6ef9552 _public_6ef9552
#define public_6ef955c _public_6ef955c
#define public_6ef9560 _public_6ef9560
#define public_6ef9564 _public_6ef9564
#define public_6ef9588 _public_6ef9588
#define public_6ef9591 _public_6ef9591
#define public_6ef95bc _public_6ef95bc
#define public_6ef95c9 _public_6ef95c9

PROC_DECLARE(0x6ef9503, internal_6ef9503, public_6ef9503);
extern "C" NAKED register_t __cdecl internal_6ef9503()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr ds : [public_6f012a8], 0
        push ebx
        push esi
        push edi
        jne public_6ef9530
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0x41
        jl public_6ef95c9
        cmp eax, 0x5A
        jg public_6ef95c9
        add eax, 0x20
        jmp public_6ef95c9
        public_6ef9530 : nop
        mov ebx, dword ptr ss : [ebp+8]
        mov edi, 0x100
        push 1
        cmp ebx, edi
        pop esi
        jge public_6ef9564
        cmp dword ptr ds : [public_6f00610], esi
        jle public_6ef9552
        push esi
        push ebx
        call public_6ef948e
        pop ecx
        pop ecx
        jmp public_6ef955c
        public_6ef9552 : nop
        mov eax, dword ptr ds : [public_6f0061c]
        mov al, byte ptr ds : [eax+ebx*2]
        and eax, esi
        public_6ef955c : nop
        test eax, eax
        jne public_6ef9564
        public_6ef9560 : nop
        mov eax, ebx
        jmp public_6ef95c9
        public_6ef9564 : nop
        mov edx, dword ptr ds : [public_6f0061c]
        mov eax, ebx
        sar eax, 8
        movzx ecx, al
        test byte ptr ds : [edx+ecx*2+1], 0x80
        je public_6ef9588
        and byte ptr ss : [ebp+0xA], 0
        push 2
        mov byte ptr ss : [ebp+8], al
        mov byte ptr ss : [ebp+9], bl
        pop eax
        jmp public_6ef9591
        public_6ef9588 : nop
        and byte ptr ss : [ebp+9], 0
        mov byte ptr ss : [ebp+8], bl
        mov eax, esi
        public_6ef9591 : nop
        push esi
        push 0
        lea ecx, ss:[ebp-4]
        push 3
        push ecx
        push eax
        lea eax, ss:[ebp+8]
        push eax
        push edi
        push dword ptr ds : [public_6f012a8]
        call public_6efa8e3
        add esp, 0x20
        test eax, eax
        je public_6ef9560
        cmp eax, esi
        jne public_6ef95bc
        movzx eax, byte ptr ss : [ebp-4]
        jmp public_6ef95c9
        public_6ef95bc : nop
        movzx eax, byte ptr ss : [ebp-3]
        movzx ecx, byte ptr ss : [ebp-4]
        shl eax, 8
        or eax, ecx
        public_6ef95c9 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef9503)
    }
}

#undef public_6ef9530
#undef public_6ef9552
#undef public_6ef955c
#undef public_6ef9560
#undef public_6ef9564
#undef public_6ef9588
#undef public_6ef9591
#undef public_6ef95bc
#undef public_6ef95c9
