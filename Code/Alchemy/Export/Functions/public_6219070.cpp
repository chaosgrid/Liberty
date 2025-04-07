#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d670);
CLANG_FORWARD_PROC_SYMBOL(public_6217b60);
CLANG_FORWARD_PROC_SYMBOL(public_6217b80);
CLANG_FORWARD_PROC_SYMBOL(public_62184c0);
CLANG_FORWARD_PROC_SYMBOL(public_6219070);
CLANG_FORWARD_PROC_SYMBOL(public_6244b50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624858e);

#define public_6219097 _public_6219097
#define public_6219099 _public_6219099
#define public_62190ee _public_62190ee
#define public_62190fd _public_62190fd
#define public_6219129 _public_6219129
#define public_6219137 _public_6219137
#define public_6219170 _public_6219170

PROC_DECLARE(0x6219070, internal_6219070, public_6219070);
extern "C" NAKED register_t __cdecl internal_6219070()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624858e @0x6219078*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624858e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        cmp ecx, ebx
        push edi
        je public_6219097
        lea edi, ds:[ecx+0xC]
        jmp public_6219099
        public_6219097 : nop
        xor edi, edi
        public_6219099 : nop
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x2C], ebx
        lea esi, ds:[edi+0xD8]
        mov dword ptr ss : [esp+0x18], esi
        push ecx
        mov ecx, esi
        mov eax, esp
        mov dword ptr ss : [esp+0x20], esp
        push eax
        mov byte ptr ss : [esp+0x34], 2
        call public_6217b80
        push ecx
        mov byte ptr ss : [esp+0x34], 3
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push ecx
        mov ecx, esi
        call public_6217b60
        lea edx, ss:[esp+0x1C]
        mov ecx, esi
        push edx
        mov byte ptr ss : [esp+0x38], 2
        call public_62184c0
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], ebx
        cmp eax, ebx
        je public_62190fd
        public_62190ee : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        jne public_62190ee
        public_62190fd : nop
        lea ecx, ds:[edi+0xB4]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ss : [esp+0x2C], bl
        call public_6244b50
        mov ebp, dword ptr ds : [edi+0xA0]
        mov esi, dword ptr ds : [edi+0x9C]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x2C], 4
        je public_6219137
        public_6219129 : nop
        mov ecx, esi
        call public_620d670
        add esi, 4
        cmp esi, ebp
        jne public_6219129
        public_6219137 : nop
        mov eax, dword ptr ds : [edi+0x9C]
        push eax
        call public_62460e0
        mov dword ptr ds : [edi+0x9C], ebx
        mov dword ptr ds : [edi+0xA0], ebx
        mov dword ptr ds : [edi+0xA4], ebx
        mov eax, dword ptr ds : [edi+0x7C]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6219170
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], ebx
        public_6219170 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6219070)
    }
}

#undef public_6219097
#undef public_6219099
#undef public_62190ee
#undef public_62190fd
#undef public_6219129
#undef public_6219137
#undef public_6219170
