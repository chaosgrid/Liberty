#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_4ca530);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd9a6);

#define public_4ca580 _public_4ca580
#define public_4ca595 _public_4ca595
#define public_4ca5a0 _public_4ca5a0
#define public_4ca5b0 _public_4ca5b0
#define public_4ca5d7 _public_4ca5d7

PROC_DECLARE(0x4ca530, internal_4ca530, public_4ca530);
extern "C" NAKED register_t __cdecl internal_4ca530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd9a6 @0x4ca532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd9a6
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
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        mov dword ptr ss : [esp+0x1C], 0
        je public_4ca5a0
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        lea ecx, ds:[esi+0x254]
        lea eax, ds:[esi+0x44]
        mov edx, 4
        lea ebx, ds:[ebx]
        public_4ca580 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_4ca595
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        public_4ca595 : nop
        add ecx, 4
        add eax, 0x84
        dec edx
        jne public_4ca580
        public_4ca5a0 : nop
        lea ebx, ds:[esi+4]
        mov edi, ebx
        mov ebp, 4
        lea ebx, ds:[ebx]
        public_4ca5b0 : nop
        mov ecx, edi
        call public_420f70
        add edi, 0x10
        dec ebp
        jne public_4ca5b0
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_4ca5d7
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov dword ptr ds : [esi], 0
/*FIXUP public_4ca5d7 : nop
        push offset _public_420d10 @0x4ca5d7*/
  FIXUP public_4ca5d7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d10
        push 4
        push 0x10
        push ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_5b7ec6
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4ca530)
    }
}

#undef public_4ca580
#undef public_4ca595
#undef public_4ca5a0
#undef public_4ca5b0
#undef public_4ca5d7
