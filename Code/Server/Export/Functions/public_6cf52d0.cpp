#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf52d0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7540);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d5fcfc);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60a26);

#define public_6cf5310 _public_6cf5310
#define public_6cf5328 _public_6cf5328
#define public_6cf532f _public_6cf532f
#define public_6cf5340 _public_6cf5340
#define public_6cf5355 _public_6cf5355
#define public_6cf53a2 _public_6cf53a2
#define public_6cf53b7 _public_6cf53b7

PROC_DECLARE(0x6cf52d0, internal_6cf52d0, public_6cf52d0);
extern "C" NAKED register_t __cdecl internal_6cf52d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60a26 @0x6cf52d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60a26
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], offset public_6d66988
        mov eax, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], 1
        je public_6cf532f
        lea ebx, ds:[ebx]
        public_6cf5310 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_6cf5328
        lea ecx, ds:[edi+8]
        call public_6d5fcfc
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6cf5328 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0xC]
        jne public_6cf5310
        public_6cf532f : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+8]
        je public_6cf5355
        nop 
        lea esp, ss:[esp]
        public_6cf5340 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6d0f620
        cmp esi, ebx
        jne public_6cf5340
        public_6cf5355 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        lea esi, ss:[ebp+0x14]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 0
        call public_6cf7540
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6d5ffb0
        mov dword ptr ds : [esi+8], ebx
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp]
        add esp, 8
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_6cf53b7
        public_6cf53a2 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_6d0f620
        cmp esi, ebp
        jne public_6cf53a2
        public_6cf53b7 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6cf52d0)
    }
}

#undef public_6cf5310
#undef public_6cf5328
#undef public_6cf532f
#undef public_6cf5340
#undef public_6cf5355
#undef public_6cf53a2
#undef public_6cf53b7
