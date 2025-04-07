#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633386d _public_633386d
#define public_6333888 _public_6333888
#define public_6333898 _public_6333898
#define public_63338c1 _public_63338c1
#define public_63338d5 _public_63338d5
#define public_63338e5 _public_63338e5
#define public_63338f0 _public_63338f0
#define public_6333900 _public_6333900
#define public_6333941 _public_6333941

PROC_DECLARE(0x6333840, internal_6333840, public_6333840);
extern "C" NAKED register_t __cdecl internal_6333840()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ds:[esi+4]
        push ecx
        push ebx
        mov ecx, esi
        mov byte ptr ds : [esi+0xD], 1
        call dword ptr ds : [eax+8]
        test al, al
        jne public_633386d
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_63a4978 @0x6333862*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4978
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+8]
        public_633386d : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x2C]
        mov byte ptr ds : [esi+0xD], 0
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_63338c1
        push ebp
        lea ebx, ds:[esi+0x1C]
        lea ebp, ds:[esi+0x28]
        public_6333888 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_6333898
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6333898 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebx
        call public_6271cc0
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_6271cc0
        mov edi, dword ptr ds : [eax]
        cmp edi, dword ptr ds : [esi+0x2C]
        jne public_6333888
        mov ebx, dword ptr ss : [esp+0x1C]
        pop ebp
        public_63338c1 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax]
        cmp eax, 3
        je public_6333941
        mov eax, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_63338e5
        public_63338d5 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x20]
        jne public_63338d5
        public_63338e5 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6333941
        mov edi, edi
        public_63338f0 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6333900
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6333900 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        dec dword ptr ds : [esi+0x24]
        mov ebx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        push edi
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+0x30]
        add esp, 8
        dec ecx
        mov dword ptr ds : [esi+0x30], ecx
        cmp ebx, dword ptr ds : [esi+0x2C]
        mov edi, ebx
        jne public_63338f0
        public_6333941 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6333840)
    }
}

#undef public_633386d
#undef public_6333888
#undef public_6333898
#undef public_63338c1
#undef public_63338d5
#undef public_63338e5
#undef public_63338f0
#undef public_6333900
#undef public_6333941
