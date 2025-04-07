#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_631fa40);
CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_631fd00);
CLANG_FORWARD_PROC_SYMBOL(public_6324550);
CLANG_FORWARD_PROC_SYMBOL(public_6324920);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6396f64);

#define public_6324970 _public_6324970
#define public_63249d0 _public_63249d0
#define public_63249ef _public_63249ef
#define public_6324a11 _public_6324a11
#define public_6324a20 _public_6324a20
#define public_6324a4b _public_6324a4b
#define public_6324a5b _public_6324a5b
#define public_6324a71 _public_6324a71
#define public_6324a82 _public_6324a82
#define public_6324adb _public_6324adb

PROC_DECLARE(0x6324920, internal_6324920, public_6324920);
extern "C" NAKED register_t __cdecl internal_6324920()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6396f64 @0x6324928*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396f64
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x124
        push ebp
        mov ebp, dword ptr ss : [esp+0x138]
        cmp ebp, eax
        push edi
        je public_6324adb
        lea edi, ss:[ebp+0x90]
        cmp edi, eax
        je public_6324adb
        push ebx
        lea eax, ss:[esp+0x14]
        push esi
        mov dword ptr ss : [esp+0x10], eax
        xor ebx, ebx
        lea ebx, ds:[ebx]
        public_6324970 : nop
        mov ecx, dword ptr ds : [edi]
        lea edx, ds:[edi+4]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_631fd00
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp]
        mov ecx, eax
        sub ecx, edx
        mov dword ptr ss : [esp+0x13C], ebx
        js public_6324a11
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0xA8], eax
        call public_631fd00
        mov ecx, edi
        mov eax, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ds : [edi-0x90]
        sub eax, edx
        lea esi, ds:[edi-0x90]
        mov byte ptr ss : [esp+0x13C], 1
        jns public_63249ef
        public_63249d0 : nop
        push esi
        call public_6324550
        mov edx, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ds : [esi-0x90]
        mov ecx, esi
        sub esi, 0x90
        sub edx, eax
        js public_63249d0
        public_63249ef : nop
        lea eax, ss:[esp+0xA4]
        push eax
        call public_6324550
        lea ecx, ss:[esp+0xA8]
        mov byte ptr ss : [esp+0x13C], bl
        call public_631fa40
        jmp public_6324a5b
        public_6324a11 : nop
        cmp ebp, edi
        je public_6324a4b
        lea esi, ds:[edi+0x90]
        nop 
        lea esp, ss:[esp]
        public_6324a20 : nop
        mov ecx, dword ptr ds : [esi-0x120]
        sub esi, 0x90
        lea edx, ds:[esi-0x8C]
        mov dword ptr ds : [esi], ecx
        push edx
        lea ecx, ds:[esi+4]
        call public_631fad0
        lea eax, ds:[esi-0x90]
        cmp eax, ebp
        jne public_6324a20
        mov eax, dword ptr ss : [esp+0x14]
        public_6324a4b : nop
        lea edx, ss:[esp+0x18]
        lea ecx, ss:[ebp+4]
        push edx
        mov dword ptr ss : [ebp], eax
        call public_631fad0
        public_6324a5b : nop
        mov eax, dword ptr ss : [esp+0xA0]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x13C], 2
        je public_6324a82
        public_6324a71 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_6324a71
        public_6324a82 : nop
        mov eax, dword ptr ss : [esp+0x94]
        push eax
        call public_6391d5a
        add esp, 4
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x98], ebx
        mov dword ptr ss : [esp+0x9C], ebx
        call public_630e210
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x13C], 0xFFFFFFFF
        call public_630e210
        mov eax, dword ptr ss : [esp+0x148]
        add edi, 0x90
        cmp edi, eax
        jne public_6324970
        pop esi
        pop ebx
        public_6324adb : nop
        mov ecx, dword ptr ss : [esp+0x12C]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x130
        ret 
        UNREACHABLE_TRAP(0x6324920)
    }
}

#undef public_6324970
#undef public_63249d0
#undef public_63249ef
#undef public_6324a11
#undef public_6324a20
#undef public_6324a4b
#undef public_6324a5b
#undef public_6324a71
#undef public_6324a82
#undef public_6324adb
