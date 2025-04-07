#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6015);

#define public_6ef6027 _public_6ef6027
#define public_6ef6030 _public_6ef6030
#define public_6ef6045 _public_6ef6045
#define public_6ef6078 _public_6ef6078
#define public_6ef6085 _public_6ef6085
#define public_6ef60be _public_6ef60be
#define public_6ef60fb _public_6ef60fb
#define public_6ef610b _public_6ef610b

PROC_DECLARE(0x6ef6015, internal_6ef6015, public_6ef6015);
extern "C" NAKED register_t __cdecl internal_6ef6015()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        mov esi, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ecx+8]
        xor ebx, ebx
        public_6ef6027 : nop
        test eax, eax
        jl public_6ef6030
        shl eax, 1
        inc ebx
        jmp public_6ef6027
        public_6ef6030 : nop
        mov eax, ebx
        push 0x3F
        imul eax, 0x204
        pop edx
        lea eax, ds:[eax+esi+0x144]
        mov dword ptr ss : [ebp-4], eax
        public_6ef6045 : nop
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [eax+4], eax
        add eax, 8
        dec edx
        jne public_6ef6045
        mov edi, ebx
        push 4
        shl edi, 0xF
        add edi, dword ptr ds : [ecx+0xC]
        push 0x1000
        push 0x8000
        push edi
        call dword ptr ds : [public_6efc0b0]
        test eax, eax
        jne public_6ef6078
        or eax, 0xFFFFFFFF
        jmp public_6ef610b
        public_6ef6078 : nop
        lea edx, ds:[edi+0x7000]
        cmp edi, edx
        ja public_6ef60be
        lea eax, ds:[edi+0x10]
        public_6ef6085 : nop
        or dword ptr ds : [eax-8], 0xFFFFFFFF
        or dword ptr ds : [eax+0xFEC], 0xFFFFFFFF
        lea ecx, ds:[eax+0xFFC]
        mov dword ptr ds : [eax-4], 0xFF0
        mov dword ptr ds : [eax], ecx
        lea ecx, ds:[eax-0x1004]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0xFE8], 0xFF0
        add eax, 0x1000
        lea ecx, ds:[eax-0x10]
        cmp ecx, edx
        jbe public_6ef6085
        public_6ef60be : nop
        mov eax, dword ptr ss : [ebp-4]
        lea ecx, ds:[edi+0xC]
        add eax, 0x1F8
        push 1
        pop edi
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ds:[edx+0xC]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [ecx+4], eax
        and dword ptr ds : [esi+ebx*4+0x44], 0
        mov dword ptr ds : [esi+ebx*4+0xC4], edi
        mov al, byte ptr ds : [esi+0x43]
        mov cl, al
        inc cl
        test al, al
        mov eax, dword ptr ss : [ebp+8]
        mov byte ptr ds : [esi+0x43], cl
        jne public_6ef60fb
        or dword ptr ds : [eax+4], edi
        public_6ef60fb : nop
        mov edx, 0x80000000
        mov ecx, ebx
        shr edx, cl
        not edx
        and dword ptr ds : [eax+8], edx
        mov eax, ebx
        public_6ef610b : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef6015)
    }
}

#undef public_6ef6027
#undef public_6ef6030
#undef public_6ef6045
#undef public_6ef6078
#undef public_6ef6085
#undef public_6ef60be
#undef public_6ef60fb
#undef public_6ef610b
