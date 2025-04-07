#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eacf80);
CLANG_FORWARD_PROC_SYMBOL(public_6ead070);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9df3);

#define public_6eacfb7 _public_6eacfb7
#define public_6eacfcc _public_6eacfcc
#define public_6eacff1 _public_6eacff1
#define public_6ead006 _public_6ead006
#define public_6ead030 _public_6ead030
#define public_6ead045 _public_6ead045

PROC_DECLARE(0x6eacf80, internal_6eacf80, public_6eacf80);
extern "C" NAKED register_t __cdecl internal_6eacf80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9df3 @0x6eacf82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9df3
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
        mov ebp, dword ptr ds : [ebx+0x1C]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0x18]
        mov dword ptr ss : [esp+0x20], 1
        je public_6eacfcc
        public_6eacfb7 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebp
        jne public_6eacfb7
        public_6eacfcc : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebp, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+0xC]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x20], al
        je public_6ead006
        public_6eacff1 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6ead070
        cmp esi, ebp
        jne public_6eacff1
        public_6ead006 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor ebp, ebp
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        add esp, 4
        cmp esi, edi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_6ead045
        nop 
        lea esp, ss:[esp]
        public_6ead030 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_6ecfe80
        cmp esi, edi
        jne public_6ead030
        public_6ead045 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6eacf80)
    }
}

#undef public_6eacfb7
#undef public_6eacfcc
#undef public_6eacff1
#undef public_6ead006
#undef public_6ead030
#undef public_6ead045
