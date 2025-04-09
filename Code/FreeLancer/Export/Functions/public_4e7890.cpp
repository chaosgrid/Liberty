#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_4e7890);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);

#define public_4e78e0 _public_4e78e0
#define public_4e7907 _public_4e7907
#define public_4e790f _public_4e790f
#define public_4e791b _public_4e791b
#define public_4e7922 _public_4e7922
#define public_4e7936 _public_4e7936
#define public_4e793d _public_4e793d
#define public_4e7949 _public_4e7949

PROC_DECLARE(0x4e7890, internal_4e7890, public_4e7890);
extern "C" NAKED register_t __cdecl internal_4e7890()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        call public_41dd90
        test al, al
        je public_4e7949
        call public_54baf0
        test eax, eax
        je public_4e7949
        call public_41a3e0
        test al, al
        jne public_4e7949
        mov al, byte ptr ds : [edi+0x498]
        test al, al
        je public_4e791b
        lea ecx, ds:[edi+0x32C]
        call public_55e280
        test al, al
        jne public_4e791b
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        je public_4e790f
        push ebp
        lea esp, ss:[esp]
        public_4e78e0 : nop
        test byte ptr ds : [esi+0x6C], 2
        je public_4e7907
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov ebp, eax
        call dword ptr ds : [edx+0x34]
        cmp ebp, dword ptr ds : [edi+0x494]
        jne public_4e7907
        mov eax, dword ptr ds : [edi-0x38]
        lea ecx, ds:[edi-0x38]
        call dword ptr ds : [eax+0x38]
        public_4e7907 : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_4e78e0
        pop ebp
        public_4e790f : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        pop edi
        pop esi
        jmp dword ptr ds : [edx+0x9C]
        public_4e791b : nop
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        je public_4e793d
        public_4e7922 : nop
        test byte ptr ds : [esi+0x6C], 2
        je public_4e7936
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        public_4e7936 : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_4e7922
        public_4e793d : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        pop edi
        pop esi
        jmp dword ptr ds : [eax+0x9C]
        public_4e7949 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4e7890)
    }
}

#undef public_4e78e0
#undef public_4e7907
#undef public_4e790f
#undef public_4e791b
#undef public_4e7922
#undef public_4e7936
#undef public_4e793d
#undef public_4e7949
