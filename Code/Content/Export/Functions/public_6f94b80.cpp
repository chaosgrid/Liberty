#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93080);
CLANG_FORWARD_PROC_SYMBOL(public_6f935f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb161e);

#define public_6f94bc0 _public_6f94bc0
#define public_6f94c14 _public_6f94c14
#define public_6f94c53 _public_6f94c53
#define public_6f94c80 _public_6f94c80

PROC_DECLARE(0x6f94b80, internal_6f94b80, public_6f94b80);
extern "C" NAKED register_t __cdecl internal_6f94b80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb161e @0x6f94b82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb161e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x4F0]
        mov ebx, dword ptr ds : [edi+0x4EC]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        je public_6f94c14
        lea esi, ds:[ebx+0xEC]
        lea esp, ss:[esp]
        public_6f94bc0 : nop
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f93080
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov ebp, eax
        call public_6f1df30
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_6fa8370
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov ecx, esi
        call public_6f935f0
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 0x108
        add esi, 0x108
        cmp ebx, eax
        jne public_6f94bc0
        public_6f94c14 : nop
        mov eax, dword ptr ds : [edi+0x4EC]
        push eax
        call public_6fa8fe0
        xor ebp, ebp
        add esp, 4
        mov dword ptr ds : [edi+0x4EC], ebp
        mov dword ptr ds : [edi+0x4F0], ebp
        mov dword ptr ds : [edi+0x4F4], ebp
        lea ecx, ds:[edi+0x4AC]
        mov dword ptr ss : [esp+0x2C], ebp
        call dword ptr ds : [public_6fb3034]
        mov ebx, dword ptr ds : [edi+0x470]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6f94c80
        public_6f94c53 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0x474]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x474], ecx
        jne public_6f94c53
        public_6f94c80 : nop
        mov eax, dword ptr ds : [edi+0x470]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        mov dword ptr ds : [edi+0x470], ebp
        mov dword ptr ds : [edi+0x474], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f94b80)
    }
}

#undef public_6f94bc0
#undef public_6f94c14
#undef public_6f94c53
#undef public_6f94c80
