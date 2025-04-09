#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477da0);
CLANG_FORWARD_PROC_SYMBOL(public_4b6c80);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd258);

#define public_4b6cb3 _public_4b6cb3
#define public_4b6ce0 _public_4b6ce0
#define public_4b6d0f _public_4b6d0f
#define public_4b6d11 _public_4b6d11

PROC_DECLARE(0x4b6c80, internal_4b6c80, public_4b6c80);
extern "C" NAKED register_t __cdecl internal_4b6c80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd258 @0x4b6c82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd258
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov ebx, dword ptr ds : [edi+0x97C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0
        je public_4b6ce0
        public_4b6cb3 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [edi+0x980]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x980], ecx
        jne public_4b6cb3
        public_4b6ce0 : nop
        mov eax, dword ptr ds : [edi+0x97C]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        mov dword ptr ds : [edi+0x97C], 0
        mov dword ptr ds : [edi+0x980], 0
        je public_4b6d0f
        lea ecx, ds:[edi+0x974]
        jmp public_4b6d11
        public_4b6d0f : nop
        xor ecx, ecx
        public_4b6d11 : nop
        call public_576010
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_477da0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4b6c80)
    }
}

#undef public_4b6cb3
#undef public_4b6ce0
#undef public_4b6d0f
#undef public_4b6d11
