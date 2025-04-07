#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1810);
CLANG_FORWARD_PROC_SYMBOL(public_65f18d0);
CLANG_FORWARD_PROC_SYMBOL(public_65f1900);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f2310 _public_65f2310
#define public_65f2334 _public_65f2334
#define public_65f2338 _public_65f2338
#define public_65f233d _public_65f233d
#define public_65f238a _public_65f238a
#define public_65f23a5 _public_65f23a5
#define public_65f23c5 _public_65f23c5
#define public_65f23cc _public_65f23cc
#define public_65f23df _public_65f23df
#define public_65f23f0 _public_65f23f0

PROC_DECLARE(0x65f22f0, internal_65f22f0, public_65f22f0);
extern "C" NAKED register_t __cdecl internal_65f22f0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor edi, edi
        cmp eax, 0x18
        jne public_65f23df
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        push ebx
        public_65f2310 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65f2338
        test cl, cl
        je public_65f2334
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65f2338
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65f2310
        public_65f2334 : nop
        xor eax, eax
        jmp public_65f233d
        public_65f2338 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65f233d : nop
        test eax, eax
        pop ebx
        jne public_65f23df
        push 0x18
        call public_6600bb6
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_65f23cc
        mov ecx, esi
        call public_65f1810
        lea eax, ds:[esi+0xC]
        mov dword ptr ds : [eax], offset public_66012c4
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6601228
        mov dword ptr ds : [esi+4], offset public_66011f4
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+8], ecx
        jne public_65f23c5
        mov dword ptr ds : [esi+8], eax
        public_65f238a : nop
        push ebp
        mov ecx, esi
        call public_65f1900
        mov edi, eax
        test edi, edi
        je public_65f23f0
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_65f23a5
        mov dword ptr ds : [eax], 0
        public_65f23a5 : nop
        mov ecx, esi
        call public_65f18d0
        push esi
        call public_6600bb0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_65f23c5 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_65f238a
        public_65f23cc : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_65f23df : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        public_65f23f0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x65f22f0)
    }
}

#undef public_65f2310
#undef public_65f2334
#undef public_65f2338
#undef public_65f233d
#undef public_65f238a
#undef public_65f23a5
#undef public_65f23c5
#undef public_65f23cc
#undef public_65f23df
#undef public_65f23f0
