#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ef20);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f000);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

#define public_6f4ef57 _public_6f4ef57
#define public_6f4ef67 _public_6f4ef67
#define public_6f4ef9e _public_6f4ef9e
#define public_6f4efb5 _public_6f4efb5
#define public_6f4efbe _public_6f4efbe
#define public_6f4efc8 _public_6f4efc8
#define public_6f4efd8 _public_6f4efd8

PROC_DECLARE(0x6f4ef20, internal_6f4ef20, public_6f4ef20);
extern "C" NAKED register_t __cdecl internal_6f4ef20()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebp
        call public_6f4f000
        mov esi, eax
        lea eax, ds:[esi*4]
        push eax
        push 0
        call public_6f4fe10
        add esp, 0xC
        test esi, esi
        mov ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        jle public_6f4ef57
        mov ecx, esi
        xor eax, eax
        mov edi, ebx
        rep stosd
        public_6f4ef57 : nop
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [esp+0x14], edi
        jle public_6f4efd8
        public_6f4ef67 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [eax+edi*4]
        test ebx, ebx
        je public_6f4efc8
        cmp ebx, offset public_6f608b0
        je public_6f4efc8
        mov ecx, dword ptr ds : [ebx+8]
        xor edx, edx
        mov eax, ecx
        div esi
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax+edx*4], 0
        lea eax, ds:[eax+edx*4]
        je public_6f4efbe
        lea edi, ds:[esi-2]
        and edi, ecx
        lea ecx, ds:[edi+1]
        lea edi, ds:[ecx*4]
        public_6f4ef9e : nop
        add edx, ecx
        add eax, edi
        cmp edx, esi
        jl public_6f4efb5
        lea ebp, ds:[esi*4]
        sub edx, esi
        sub eax, ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6f4efb5 : nop
        cmp dword ptr ds : [eax], 0
        jne public_6f4ef9e
        mov edi, dword ptr ss : [esp+0x14]
        public_6f4efbe : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+edx*4], ebx
        inc dword ptr ss : [ebp+4]
        public_6f4efc8 : nop
        mov eax, dword ptr ss : [ebp]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edi
        jl public_6f4ef67
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f4efd8 : nop
        mov edx, dword ptr ss : [ebp+8]
        push 0
        push edx
        call public_6f4fe10
        add esp, 8
        pop edi
        mov dword ptr ss : [ebp], esi
        pop esi
        mov dword ptr ss : [ebp+8], ebx
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f4ef20)
    }
}

#undef public_6f4ef57
#undef public_6f4ef67
#undef public_6f4ef9e
#undef public_6f4efb5
#undef public_6f4efbe
#undef public_6f4efc8
#undef public_6f4efd8
