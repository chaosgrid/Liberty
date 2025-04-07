#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6a6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafcf1);

#define public_6f6a6f8 _public_6f6a6f8
#define public_6f6a70d _public_6f6a70d
#define public_6f6a72f _public_6f6a72f
#define public_6f6a740 _public_6f6a740

PROC_DECLARE(0x6f6a6a0, internal_6f6a6a0, public_6f6a6a0);
extern "C" NAKED register_t __cdecl internal_6f6a6a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafcf1 @0x6f6a6a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafcf1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6f6a740
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        push 0x2C
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x28], ecx
        je public_6f6a740
        public_6f6a6f8 : nop
        mov edi, dword ptr ss : [ebp+4]
        push 0x2C
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebp
        jne public_6f6a70d
        mov edi, eax
        public_6f6a70d : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f6a72f
        mov ecx, 9
        lea esi, ds:[ebx+8]
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        public_6f6a72f : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x28]
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6f6a6f8
        public_6f6a740 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f6a6a0)
    }
}

#undef public_6f6a6f8
#undef public_6f6a70d
#undef public_6f6a72f
#undef public_6f6a740
