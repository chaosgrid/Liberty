#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58c370);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_58c384 _public_58c384
#define public_58c38c _public_58c38c
#define public_58c39e _public_58c39e
#define public_58c3a6 _public_58c3a6
#define public_58c3d0 _public_58c3d0
#define public_58c3e4 _public_58c3e4
#define public_58c3f2 _public_58c3f2
#define public_58c3f4 _public_58c3f4
#define public_58c406 _public_58c406
#define public_58c423 _public_58c423
#define public_58c434 _public_58c434
#define public_58c442 _public_58c442
#define public_58c444 _public_58c444
#define public_58c456 _public_58c456

PROC_DECLARE(0x58c370, internal_58c370, public_58c370);
extern "C" NAKED register_t __cdecl internal_58c370()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        push edi
        jne public_58c384
        xor eax, eax
        jmp public_58c38c
        public_58c384 : nop
        mov eax, dword ptr ds : [esi+0x18]
        sub eax, ecx
        sar eax, 2
        public_58c38c : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        lea edi, ds:[eax*4]
        jne public_58c39e
        xor eax, eax
        jmp public_58c3a6
        public_58c39e : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_58c3a6 : nop
        test edi, edi
        lea ebx, ds:[eax*4]
        mov dword ptr ss : [ebp-4], ebx
        jbe public_58c406
        mov eax, edi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, dword ptr ds : [esi+0x18]
        mov edx, esp
        mov ecx, edx
        je public_58c3e4
        lea ecx, ds:[ecx]
        public_58c3d0 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [esi+0x18]
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_58c3d0
        mov ebx, dword ptr ss : [ebp-4]
        public_58c3e4 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        jle public_58c3f2
        mov eax, dword ptr ds : [ecx+eax*4]
        jmp public_58c3f4
        public_58c3f2 : nop
        xor eax, eax
        public_58c3f4 : nop
        push edi
        push edx
        push 3
        push 0
/*FIXUP push offset public_5e5104 @0x58c3fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5104
        push eax
        call dword ptr ds : [public_5c600c]
        public_58c406 : nop
        test ebx, ebx
        jbe public_58c456
        mov eax, ebx
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov eax, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [esi+8]
        mov edx, esp
        mov ecx, edx
        je public_58c434
        public_58c423 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [esi+8]
        add eax, 4
        add ecx, 4
        cmp eax, edi
        jne public_58c423
        public_58c434 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        jle public_58c442
        mov eax, dword ptr ds : [ecx+eax*4]
        jmp public_58c444
        public_58c442 : nop
        xor eax, eax
        public_58c444 : nop
        push ebx
        push edx
        push 3
        push 0
/*FIXUP push offset public_5e50fc @0x58c44a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e50fc
        push eax
        call dword ptr ds : [public_5c600c]
        public_58c456 : nop
        mov al, 1
        lea esp, ss:[ebp-0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x58c370)
    }
}

#undef public_58c384
#undef public_58c38c
#undef public_58c39e
#undef public_58c3a6
#undef public_58c3d0
#undef public_58c3e4
#undef public_58c3f2
#undef public_58c3f4
#undef public_58c406
#undef public_58c423
#undef public_58c434
#undef public_58c442
#undef public_58c444
#undef public_58c456
