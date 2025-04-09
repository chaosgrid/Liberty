#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_4a2c50);
CLANG_FORWARD_PROC_SYMBOL(public_4cc440);
CLANG_FORWARD_PROC_SYMBOL(public_4cc660);
CLANG_FORWARD_PROC_SYMBOL(public_4cc9a0);
CLANG_FORWARD_PROC_SYMBOL(public_4cd160);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3510);

#define public_4cd958 _public_4cd958
#define public_4cd99b _public_4cd99b
#define public_4cd9bc _public_4cd9bc
#define public_4cd9ca _public_4cd9ca

PROC_DECLARE(0x4cd8a0, internal_4cd8a0, public_4cd8a0);
extern "C" NAKED register_t __cdecl internal_4cd8a0()
{
    __asm
    {
        push ecx
        push edi
        mov edi, ecx
        call public_41a3e0
        test al, al
        jne public_4cd9ca
        call public_4a2c50
        test al, al
        jne public_4cd9ca
/*FIXUP push offset public_5d0228 @0x4cd8be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0228
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4cd9ca
        push ebx
        push ebp
        push esi
        push eax
        lea ecx, ds:[edi+0x474]
        call public_425640
        mov ebp, eax
        mov eax, dword ptr ds : [edi+0x5B0]
        lea esi, ds:[edi+0xB4]
        lea ebx, ds:[esi+0x38]
        mov dword ptr ss : [esp+0x10], eax
        cmp byte ptr ds : [ebx], 0
        je public_4cd9bc
        mov ecx, esi
        call public_4cc440
        push 5
        call public_5b3510
        fcomp qword ptr ds : [public_5c8ba8]
        add esp, 4
        fnstsw ax
        test ah, 0x41
        jne public_4cd99b
        mov eax, dword ptr ds : [esi+0x170]
        test eax, eax
        je public_4cd958
        cmp dword ptr ds : [eax], 0
        je public_4cd958
        mov ecx, dword ptr ss : [esp+0x10]
        push ebp
        push ecx
        lea edx, ds:[edi+0x4B8]
        push edx
        mov ecx, esi
        call public_4cc660
        push 0x6EE
/*FIXUP push offset public_5d7220 @0x4cd946*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
/*FIXUP push offset public_67dbf8 @0x4cd94b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422610
        add esp, 0xC
        public_4cd958 : nop
        push 0xBD8
/*FIXUP push offset public_5d7220 @0x4cd95d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
/*FIXUP push offset public_67dbf8 @0x4cd962*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422610
        add esp, 0xC
        mov ecx, ebx
        call public_4cd160
        call public_4225e0
        push 0xB44
        call public_421ed0
        mov al, byte ptr ds : [ebx+0x4E]
        add esp, 4
        test al, al
        je public_4cd99b
        add ebx, 4
        push ebx
        call public_4cc9a0
        add esp, 4
        public_4cd99b : nop
        push 0x6F5
/*FIXUP push offset public_5d7220 @0x4cd9a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
/*FIXUP push offset public_67dbf8 @0x4cd9a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422610
/*FIXUP push offset public_67dbf8 @0x4cd9af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422950
        add esp, 0x10
        public_4cd9bc : nop
        pop esi
        pop ebp
        pop ebx
        mov ecx, edi
        pop edi
        add esp, 4
        jmp public_59e5c0
        public_4cd9ca : nop
        pop edi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4cd8a0)
    }
}

#undef public_4cd958
#undef public_4cd99b
#undef public_4cd9bc
#undef public_4cd9ca
