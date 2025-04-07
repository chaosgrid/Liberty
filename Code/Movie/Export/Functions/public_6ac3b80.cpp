#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3110);
CLANG_FORWARD_PROC_SYMBOL(public_6ac31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3500);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3b80);

#define public_6ac3bb7 _public_6ac3bb7
#define public_6ac3bc6 _public_6ac3bc6
#define public_6ac3c04 _public_6ac3c04
#define public_6ac3c06 _public_6ac3c06
#define public_6ac3c1a _public_6ac3c1a
#define public_6ac3c64 _public_6ac3c64
#define public_6ac3c66 _public_6ac3c66
#define public_6ac3c77 _public_6ac3c77
#define public_6ac3cc2 _public_6ac3cc2
#define public_6ac3cd1 _public_6ac3cd1
#define public_6ac3d19 _public_6ac3d19

PROC_DECLARE(0x6ac3b80, internal_6ac3b80, public_6ac3b80);
extern "C" NAKED register_t __cdecl internal_6ac3b80()
{
    __asm
    {
        sub esp, 0x10C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x124]
        push edi
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x124]
        sub eax, 2
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x18], ecx
        je public_6ac3cc2
        dec eax
        je public_6ac3bc6
        public_6ac3bb7 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10C
        ret 0xC
        public_6ac3bc6 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        push esi
        mov edi, ecx
        lea eax, ss:[esp+0x20]
        and ecx, 0x1F
        mov ebx, 1
        push 1
        push eax
        shr edi, 5
        shl ebx, cl
        call public_6ac3110
        test eax, eax
        mov ebp, dword ptr ss : [esp+0x124]
        je public_6ac3c04
        push esi
        push 1
        push ebp
        call public_6ac3110
        test eax, eax
        je public_6ac3c04
        mov eax, 1
        jmp public_6ac3c06
        public_6ac3c04 : nop
        xor eax, eax
        public_6ac3c06 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea edi, ss:[esp+edi*4+0x1C]
        cmp ecx, 1
        mov dword ptr ds : [edi], ebx
        je public_6ac3c77
        dec ecx
        mov dword ptr ss : [esp+0x10], ecx
        public_6ac3c1a : nop
        test eax, eax
        je public_6ac3c64
        lea ecx, ss:[esp+0x1C]
        push esi
        lea edx, ss:[esp+0x20]
        push ecx
        lea eax, ss:[esp+0x24]
        push edx
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac3c64
        push esi
        push ebp
        push ebp
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac3c64
        mov ecx, dword ptr ss : [esp+0x120]
        push esi
        push ebp
        push ebp
        lea edx, ss:[esp+0x28]
        push ecx
        push edx
        call public_6ac3500
        test eax, eax
        je public_6ac3c64
        mov eax, 1
        jmp public_6ac3c66
        public_6ac3c64 : nop
        xor eax, eax
        public_6ac3c66 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x10]
        xor edx, ebx
        dec ecx
        mov dword ptr ds : [edi], edx
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6ac3c1a
        public_6ac3c77 : nop
        test eax, eax
        je public_6ac3bb7
        lea eax, ss:[esp+0x1C]
        push esi
        push eax
        push ebp
        push ebp
        push ebp
        call public_6ac3500
        test eax, eax
        je public_6ac3bb7
        mov ecx, dword ptr ss : [esp+0x120]
        push esi
        lea edx, ss:[esp+0x20]
        push ecx
        push edx
        call public_6ac31d0
        test eax, eax
        je public_6ac3bb7
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10C
        ret 0xC
        public_6ac3cc2 : nop
        xor esi, esi
        xor edx, edx
        test edi, edi
        mov edi, dword ptr ss : [esp+0x124]
        je public_6ac3d19
        public_6ac3cd1 : nop
        mov ebx, dword ptr ss : [esp+0x120]
        mov eax, edx
        shr eax, 5
        mov ecx, edx
        mov ebx, dword ptr ds : [ebx+eax*4]
        and ecx, 0x1F
        shr ebx, cl
        mov ebp, dword ptr ds : [edi+eax*4]
        and ebx, 1
        xor esi, ebx
        mov ebx, esi
        not ebx
        and ebx, 1
        shl ebx, cl
        not ebx
        and ebx, ebp
        mov ebp, esi
        and ebp, 1
        shl ebp, cl
        or ebx, ebp
        inc edx
        mov dword ptr ds : [edi+eax*4], ebx
        mov eax, dword ptr ss : [esp+0x10]
        cmp edx, eax
        jne public_6ac3cd1
        mov ebx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        public_6ac3d19 : nop
        mov edx, dword ptr ds : [edi+ebx*4-4]
        xor eax, eax
        test esi, esi
        sete al
        shl edx, cl
        shr edx, cl
        mov dword ptr ds : [edi+ebx*4-4], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10C
        ret 0xC
        UNREACHABLE_TRAP(0x6ac3b80)
    }
}

#undef public_6ac3bb7
#undef public_6ac3bc6
#undef public_6ac3c04
#undef public_6ac3c06
#undef public_6ac3c1a
#undef public_6ac3c64
#undef public_6ac3c66
#undef public_6ac3c77
#undef public_6ac3cc2
#undef public_6ac3cd1
#undef public_6ac3d19
