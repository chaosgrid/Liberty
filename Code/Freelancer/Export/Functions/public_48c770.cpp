#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_48c770);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc41b);

#define public_48c7b0 _public_48c7b0
#define public_48c7b9 _public_48c7b9
#define public_48c7bb _public_48c7bb
#define public_48c7c2 _public_48c7c2
#define public_48c7fe _public_48c7fe
#define public_48c800 _public_48c800
#define public_48c820 _public_48c820
#define public_48c826 _public_48c826
#define public_48c833 _public_48c833
#define public_48c835 _public_48c835
#define public_48c840 _public_48c840
#define public_48c843 _public_48c843
#define public_48c85c _public_48c85c

PROC_DECLARE(0x48c770, internal_48c770, public_48c770);
extern "C" NAKED register_t __cdecl internal_48c770()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc41b @0x48c772*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc41b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov eax, dword ptr ds : [public_66873c]
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        push eax
        mov ecx, offset public_668708
        call public_43a8d0
        mov ecx, eax
        xor ebp, ebp
        xor edi, edi
        mov dword ptr ss : [esp+0x10], ecx
        xor eax, eax
        lea ebx, ds:[ebx]
        public_48c7b0 : nop
        cmp eax, ebp
        jne public_48c7b9
        mov eax, dword ptr ds : [ecx+4]
        jmp public_48c7bb
        public_48c7b9 : nop
        mov eax, dword ptr ds : [eax]
        public_48c7bb : nop
        cmp eax, ebp
        je public_48c7c2
        inc edi
        jmp public_48c7b0
        public_48c7c2 : nop
        lea eax, ds:[edi+edi*2]
        shl eax, 5
        add eax, 4
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_48c7fe
        mov ecx, dword ptr ds : [public_5c6130]
        mov edx, dword ptr ds : [public_5c6138]
        push ecx
        push edx
        push edi
        lea esi, ds:[eax+4]
        push 0x60
        push esi
        mov dword ptr ds : [eax], edi
        call public_5b7fba
        jmp public_48c800
        public_48c7fe : nop
        xor esi, esi
        public_48c800 : nop
        mov dword ptr ds : [ebx+0x394], esi
        xor esi, esi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [ebx+0x398], edi
        jle public_48c85c
        lea ebx, ds:[ebx]
        public_48c820 : nop
        xor ecx, ecx
        xor edx, edx
        xor eax, eax
        public_48c826 : nop
        test eax, eax
        jne public_48c833
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+4]
        jmp public_48c835
        public_48c833 : nop
        mov eax, dword ptr ds : [eax]
        public_48c835 : nop
        test eax, eax
        je public_48c843
        cmp edx, esi
        je public_48c840
        inc edx
        jmp public_48c826
        public_48c840 : nop
        mov ecx, dword ptr ds : [eax+8]
        public_48c843 : nop
        push ecx
        mov ecx, dword ptr ds : [ebx+0x394]
        add ecx, ebp
        call dword ptr ds : [public_5c6170]
        inc esi
        add ebp, 0x60
        cmp esi, edi
        jl public_48c820
        xor ebp, ebp
        public_48c85c : nop
        mov eax, dword ptr ds : [ebx+0x398]
        mov ecx, dword ptr ds : [ebx+0x428]
        dec eax
        push eax
        push ebp
        mov dword ptr ds : [ebx+0x370], ebp
        mov dword ptr ds : [ebx+0x374], ebp
        mov dword ptr ds : [ebx+0x378], ebp
        mov edx, dword ptr ds : [ecx]
        push 0x37
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x48c770)
    }
}

#undef public_48c7b0
#undef public_48c7b9
#undef public_48c7bb
#undef public_48c7c2
#undef public_48c7fe
#undef public_48c800
#undef public_48c820
#undef public_48c826
#undef public_48c833
#undef public_48c835
#undef public_48c840
#undef public_48c843
#undef public_48c85c
