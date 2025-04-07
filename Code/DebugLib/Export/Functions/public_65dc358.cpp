#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dc358);

#define public_65dc36a _public_65dc36a
#define public_65dc373 _public_65dc373
#define public_65dc388 _public_65dc388
#define public_65dc3bb _public_65dc3bb
#define public_65dc3c8 _public_65dc3c8
#define public_65dc401 _public_65dc401
#define public_65dc43e _public_65dc43e
#define public_65dc44e _public_65dc44e

PROC_DECLARE(0x65dc358, internal_65dc358, public_65dc358);
extern "C" NAKED register_t __cdecl internal_65dc358()
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
        public_65dc36a : nop
        test eax, eax
        jl public_65dc373
        shl eax, 1
        inc ebx
        jmp public_65dc36a
        public_65dc373 : nop
        mov eax, ebx
        push 0x3F
        imul eax, 0x204
        pop edx
        lea eax, ds:[eax+esi+0x144]
        mov dword ptr ss : [ebp-4], eax
        public_65dc388 : nop
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [eax+4], eax
        add eax, 8
        dec edx
        jne public_65dc388
        mov edi, ebx
        push 4
        shl edi, 0xF
        add edi, dword ptr ds : [ecx+0xC]
        push 0x1000
        push 0x8000
        push edi
        call dword ptr ds : [public_65e10d4]
        test eax, eax
        jne public_65dc3bb
        or eax, 0xFFFFFFFF
        jmp public_65dc44e
        public_65dc3bb : nop
        lea edx, ds:[edi+0x7000]
        cmp edi, edx
        ja public_65dc401
        lea eax, ds:[edi+0x10]
        public_65dc3c8 : nop
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
        jbe public_65dc3c8
        public_65dc401 : nop
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
        jne public_65dc43e
        or dword ptr ds : [eax+4], edi
        public_65dc43e : nop
        mov edx, 0x80000000
        mov ecx, ebx
        shr edx, cl
        not edx
        and dword ptr ds : [eax+8], edx
        mov eax, ebx
        public_65dc44e : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dc358)
    }
}

#undef public_65dc36a
#undef public_65dc373
#undef public_65dc388
#undef public_65dc3bb
#undef public_65dc3c8
#undef public_65dc401
#undef public_65dc43e
#undef public_65dc44e
