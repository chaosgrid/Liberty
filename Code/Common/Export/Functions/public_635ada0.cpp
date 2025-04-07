#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_635abf0);
CLANG_FORWARD_PROC_SYMBOL(public_635ac10);
CLANG_FORWARD_PROC_SYMBOL(public_635ada0);
CLANG_FORWARD_JUMP_SYMBOL(public_63981c8);

#define public_635ae09 _public_635ae09
#define public_635ae1f _public_635ae1f
#define public_635ae44 _public_635ae44

PROC_DECLARE(0x635ada0, internal_635ada0, public_635ada0);
extern "C" NAKED register_t __cdecl internal_635ada0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63981c8 @0x635ada2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63981c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        xor ebp, ebp
        mov dword ptr ds : [edi], ebp
        push 0x1000
        mov dword ptr ds : [ebx], ebp
        mov dword ptr ss : [esp+0x14], 0x400
        mov dword ptr ss : [esp+0x18], ebp
        call public_6343f70
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ss : [esp+0x30]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x30], ebp
        call public_635abf0
        mov edx, dword ptr ss : [esp+0x20]
        lea esi, ds:[edx-1]
        add esp, 0xC
        cmp esi, ebp
        jl public_635ae1f
        mov ebp, dword ptr ss : [esp+0x30]
        public_635ae09 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+esi*4]
        push ebx
        push edi
        push ebp
        push eax
        call public_635ac10
        add esp, 0x10
        dec esi
        jns public_635ae09
        public_635ae1f : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        lea ecx, ss:[esp+0x14]
        cmp eax, ecx
        pop ebp
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        pop ebx
        je public_635ae44
        test eax, eax
        je public_635ae44
        push eax
        call public_6343fb0
        add esp, 4
        public_635ae44 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x635ada0)
    }
}

#undef public_635ae09
#undef public_635ae1f
#undef public_635ae44
