#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e850);
CLANG_FORWARD_PROC_SYMBOL(public_627f340);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392d18);

#define public_627e8ad _public_627e8ad
#define public_627e8b7 _public_627e8b7
#define public_627e8d1 _public_627e8d1
#define public_627e8e5 _public_627e8e5
#define public_627e8fc _public_627e8fc
#define public_627e914 _public_627e914
#define public_627e916 _public_627e916

PROC_DECLARE(0x627e850, internal_627e850, public_627e850);
extern "C" NAKED register_t __cdecl internal_627e850()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392d18 @0x627e852*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392d18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [public_63fc424]
        push edi
        lea edi, ds:[ebx+4]
        inc edx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [public_63fc424], edx
        mov eax, dword ptr ds : [public_63fc420]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_627e8ad
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_627e8b7
        public_627e8ad : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_627e8b7 : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebp
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ds : [ecx]
        cmp ebp, ecx
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], ecx
        je public_627e914
        public_627e8d1 : nop
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        mov ecx, edi
        call public_627f340
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_627e8e5
        mov ebx, eax
        public_627e8e5 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_627e8fc
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ecx
        public_627e8fc : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x28]
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_627e8d1
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_627e916
        public_627e914 : nop
        mov eax, ebx
        public_627e916 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x627e850)
    }
}

#undef public_627e8ad
#undef public_627e8b7
#undef public_627e8d1
#undef public_627e8e5
#undef public_627e8fc
#undef public_627e914
#undef public_627e916
