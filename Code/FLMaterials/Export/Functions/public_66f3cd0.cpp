#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_JUMP_SYMBOL(public_6700b66);

#define public_66f3d1f _public_66f3d1f
#define public_66f3d30 _public_66f3d30
#define public_66f3d47 _public_66f3d47
#define public_66f3d59 _public_66f3d59
#define public_66f3d6b _public_66f3d6b
#define public_66f3d80 _public_66f3d80
#define public_66f3d99 _public_66f3d99
#define public_66f3daa _public_66f3daa
#define public_66f3dc0 _public_66f3dc0

PROC_DECLARE(0x66f3cd0, internal_66f3cd0, public_66f3cd0);
extern "C" NAKED register_t __cdecl internal_66f3cd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6700b66 @0x66f3cd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700b66
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov edi, dword ptr ds : [public_6701014]
        mov ebp, dword ptr ds : [public_6701018]
        xor ebx, ebx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov eax, dword ptr ds : [esi+0x38]
        sub eax, 5
        mov dword ptr ss : [esp+0x1C], 1
        je public_66f3d1f
        dec eax
        je public_66f3d47
        dec eax
        jne public_66f3d30
        public_66f3d1f : nop
        mov eax, dword ptr ds : [esi+0x3C]
        cmp eax, ebx
        je public_66f3d30
        push eax
        push ebx
        call ebp
        push eax
        call edi
        mov dword ptr ds : [esi+0x3C], ebx
        public_66f3d30 : nop
        mov dword ptr ds : [esi+0x3C], ebx
        mov eax, dword ptr ds : [esi+0x24]
        sub eax, 5
        mov byte ptr ss : [esp+0x1C], bl
        je public_66f3d6b
        dec eax
        je public_66f3d59
        dec eax
        je public_66f3d6b
        jmp public_66f3d80
        public_66f3d47 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x3C], ebx
        je public_66f3d30
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_66f3d30
        public_66f3d59 : nop
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x28], ebx
        je public_66f3d80
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_66f3d80
        public_66f3d6b : nop
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, ebx
        je public_66f3d80
        push eax
        push ebx
        call ebp
        push eax
        call edi
        mov dword ptr ds : [esi+0x28], ebx
        lea esp, ss:[esp]
        public_66f3d80 : nop
        mov dword ptr ds : [esi+0x28], ebx
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_66f3d99
        dec eax
        je public_66f3dc0
        dec eax
        jne public_66f3daa
        public_66f3d99 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_66f3daa
        push eax
        push ebx
        call ebp
        push eax
        call edi
        mov dword ptr ds : [esi+0x14], ebx
        public_66f3daa : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x14], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_66f3dc0 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x14], ebx
        je public_66f3daa
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_66f3daa
        UNREACHABLE_TRAP(0x66f3cd0)
    }
}

#undef public_66f3d1f
#undef public_66f3d30
#undef public_66f3d47
#undef public_66f3d59
#undef public_66f3d6b
#undef public_66f3d80
#undef public_66f3d99
#undef public_66f3daa
#undef public_66f3dc0
