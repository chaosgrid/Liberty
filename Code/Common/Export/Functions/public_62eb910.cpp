#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62eb910);

#define public_62eb930 _public_62eb930
#define public_62eb941 _public_62eb941
#define public_62eb943 _public_62eb943
#define public_62eb998 _public_62eb998
#define public_62eb99a _public_62eb99a
#define public_62eb9b7 _public_62eb9b7
#define public_62eb9c7 _public_62eb9c7

PROC_DECLARE(0x62eb910, internal_62eb910, public_62eb910);
extern "C" NAKED register_t __cdecl internal_62eb910()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x830]
        xor bl, bl
        xor ebp, ebp
        test eax, eax
        jbe public_62eb9c7
        push edi
        nop 
        lea esp, ss:[esp]
        public_62eb930 : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eb941
        lea ecx, ds:[eax-8]
        jmp public_62eb943
        public_62eb941 : nop
        xor ecx, ecx
        public_62eb943 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        mov eax, ebp
        shl eax, 5
        lea edi, ds:[eax+esi+0x30]
        push 6
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x11C]
        test eax, eax
        jne public_62eb9b7
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jl public_62eb9b7
        cmp eax, 2
        jg public_62eb9b7
        mov eax, dword ptr ss : [esp+0x18]
        mov cl, byte ptr ss : [esp+0x14]
        and eax, 0xE0000000
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+4]
        and cl, 0xF8
        add eax, 8
        mov byte ptr ss : [esp+0x14], cl
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eb998
        lea ecx, ds:[eax-8]
        jmp public_62eb99a
        public_62eb998 : nop
        xor ecx, ecx
        public_62eb99a : nop
        mov edx, dword ptr ds : [ecx]
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x118]
        test byte ptr ss : [esp+0x14], 6
        jne public_62eb9b7
        mov ebp, dword ptr ds : [esi+0x830]
        mov bl, 1
        public_62eb9b7 : nop
        mov eax, dword ptr ds : [esi+0x830]
        inc ebp
        cmp ebp, eax
        jb public_62eb930
        pop edi
        public_62eb9c7 : nop
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62eb910)
    }
}

#undef public_62eb930
#undef public_62eb941
#undef public_62eb943
#undef public_62eb998
#undef public_62eb99a
#undef public_62eb9b7
#undef public_62eb9c7
