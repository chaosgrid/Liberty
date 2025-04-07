#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea80);
CLANG_FORWARD_PROC_SYMBOL(public_58e360);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4869);

#define public_58e397 _public_58e397
#define public_58e3ac _public_58e3ac
#define public_58e3d2 _public_58e3d2
#define public_58e403 _public_58e403

PROC_DECLARE(0x58e360, internal_58e360, public_58e360);
extern "C" NAKED register_t __cdecl internal_58e360()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4869 @0x58e362*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4869
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0xC]
        mov dword ptr ss : [esp+0x20], 0
        je public_58e3ac
        public_58e397 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_46d680
        cmp esi, ebp
        jne public_58e397
        public_58e3ac : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_58e403
        public_58e3d2 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push 0
        lea ecx, ds:[esi+8]
        call public_46ea80
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_58e3d2
        public_58e403 : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x58e360)
    }
}

#undef public_58e397
#undef public_58e3ac
#undef public_58e3d2
#undef public_58e403
