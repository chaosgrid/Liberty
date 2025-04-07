#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b764b);

#define public_5b765c _public_5b765c
#define public_5b7670 _public_5b7670
#define public_5b768e _public_5b768e
#define public_5b7692 _public_5b7692
#define public_5b7697 _public_5b7697
#define public_5b76a0 _public_5b76a0
#define public_5b76a8 _public_5b76a8
#define public_5b76ad _public_5b76ad
#define public_5b76b4 _public_5b76b4
#define public_5b76ba _public_5b76ba
#define public_5b76c1 _public_5b76c1

PROC_DECLARE(0x5b764b, internal_5b764b, public_5b764b);
extern "C" NAKED register_t __cdecl internal_5b764b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        and dword ptr ss : [ebp-4], 0
        dec ecx
        push esi
        js public_5b76b4
        push ebx
        push edi
        public_5b765c : nop
        mov eax, dword ptr ss : [ebp-4]
        mov edi, dword ptr ss : [ebp+8]
        lea esi, ds:[ecx+eax]
        mov eax, dword ptr ss : [ebp+0x14]
        sar esi, 1
        mov eax, dword ptr ds : [eax+esi*4]
        add eax, dword ptr ss : [ebp+0x10]
        public_5b7670 : nop
        mov bl, byte ptr ds : [edi]
        mov dl, bl
        cmp bl, byte ptr ds : [eax]
        jne public_5b7692
        test dl, dl
        je public_5b768e
        mov bl, byte ptr ds : [edi+1]
        mov dl, bl
        cmp bl, byte ptr ds : [eax+1]
        jne public_5b7692
        inc edi
        inc edi
        inc eax
        inc eax
        test dl, dl
        jne public_5b7670
        public_5b768e : nop
        xor eax, eax
        jmp public_5b7697
        public_5b7692 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_5b7697 : nop
        test eax, eax
        jge public_5b76a0
        lea ecx, ds:[esi-1]
        jmp public_5b76a8
        public_5b76a0 : nop
        jle public_5b76ad
        lea eax, ds:[esi+1]
        mov dword ptr ss : [ebp-4], eax
        public_5b76a8 : nop
        cmp ecx, dword ptr ss : [ebp-4]
        jge public_5b765c
        public_5b76ad : nop
        cmp ecx, dword ptr ss : [ebp-4]
        pop edi
        pop ebx
        jge public_5b76ba
        public_5b76b4 : nop
        or ax, 0xFFFF
        jmp public_5b76c1
        public_5b76ba : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ax, word ptr ds : [eax+esi*2]
        public_5b76c1 : nop
        pop esi
        leave 
        ret 0x14
        UNREACHABLE_TRAP(0x5b764b)
    }
}

#undef public_5b765c
#undef public_5b7670
#undef public_5b768e
#undef public_5b7692
#undef public_5b7697
#undef public_5b76a0
#undef public_5b76a8
#undef public_5b76ad
#undef public_5b76b4
#undef public_5b76ba
#undef public_5b76c1
