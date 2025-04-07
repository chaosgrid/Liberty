#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4277c0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8c01);

#define public_427818 _public_427818
#define public_42785d _public_42785d

PROC_DECLARE(0x4277c0, internal_4277c0, public_4277c0);
extern "C" NAKED register_t __cdecl internal_4277c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8c01 @0x4277c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8c01
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebx
        xor edx, edx
        cmp ebx, edx
        mov dword ptr ss : [esp+0x10], edx
        je public_42785d
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov ecx, 7
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov dword ptr ds : [ebx+0x1C], edx
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, edx
        mov dword ptr ds : [ebx+0x1C], eax
        je public_427818
        mov ecx, dword ptr ds : [public_5c6d4c]
        mov ecx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [ecx]
        push edx
        push eax
        push ecx
        call dword ptr ds : [esi+0x34]
        public_427818 : nop
        mov edx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [ebx+0x20], edx
        mov eax, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [ebx+0x24], eax
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [ebx+0x28], ecx
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x2C], edx
        mov eax, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [ebx+0x30], eax
        mov ecx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [ebx+0x34], ecx
        mov edx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0x38], edx
        mov eax, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [ebx+0x3C], eax
        mov ecx, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [ebx+0x40], ecx
        mov edx, dword ptr ss : [ebp+0x44]
        pop edi
        mov dword ptr ds : [ebx+0x44], edx
        mov eax, dword ptr ss : [ebp+0x48]
        pop esi
        mov dword ptr ds : [ebx+0x48], eax
        pop ebp
        public_42785d : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4277c0)
    }
}

#undef public_427818
#undef public_42785d
