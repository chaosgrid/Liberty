#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_475dd0);
CLANG_FORWARD_PROC_SYMBOL(public_477190);
CLANG_FORWARD_PROC_SYMBOL(public_4771d0);
CLANG_FORWARD_PROC_SYMBOL(public_4771f0);
CLANG_FORWARD_PROC_SYMBOL(public_4774c0);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_578690);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbc96);

#define public_475e66 _public_475e66
#define public_475e85 _public_475e85
#define public_475eb5 _public_475eb5
#define public_475ed8 _public_475ed8
#define public_475ee3 _public_475ee3
#define public_475f18 _public_475f18
#define public_475f35 _public_475f35
#define public_475f49 _public_475f49
#define public_475f50 _public_475f50
#define public_475f58 _public_475f58
#define public_475fb2 _public_475fb2
#define public_475fc2 _public_475fc2
#define public_475fd0 _public_475fd0
#define public_475ff5 _public_475ff5
#define public_476001 _public_476001
#define public_47603e _public_47603e

PROC_DECLARE(0x475dd0, internal_475dd0, public_475dd0);
extern "C" NAKED register_t __cdecl internal_475dd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbc96 @0x475dd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbc96
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xD0]
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        xor esi, esi
        push edi
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov cl, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0xD0], esi
        mov byte ptr ss : [esp+0x28], cl
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0xD0], 1
        call public_5995f0
        cmp eax, ebx
        lea ecx, ss:[esp+0x14]
        jae public_475e66
        mov edi, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x40]
        push edx
        call public_5995f0
        mov ecx, ebx
        sub ecx, eax
        push ecx
        push edi
        lea ecx, ss:[esp+0x20]
        call public_578690
        jmp public_475e85
        public_475e66 : nop
        call public_5995f0
        cmp ebx, eax
        jae public_475e85
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+ebx*8]
        push edx
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_477190
        public_475e85 : nop
        lea ecx, ss:[esp+0x28]
        call public_4771d0
        cmp eax, ebx
        lea ecx, ss:[esp+0x28]
        jae public_475eb5
        mov edi, dword ptr ss : [esp+0x30]
        lea edx, ss:[esp+0x48]
        push edx
        call public_4771d0
        mov ecx, ebx
        sub ecx, eax
        push ecx
        push edi
        lea ecx, ss:[esp+0x34]
        call public_4771f0
        jmp public_475ed8
        public_475eb5 : nop
        call public_4771d0
        cmp ebx, eax
        jae public_475ed8
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, ebx
        shl eax, 7
        add eax, edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_4774c0
        public_475ed8 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_475f49
        xor ebx, ebx
        public_475ee3 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+esi*8], eax
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+esi*8+4], esi
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [public_5c6360]
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 8
        test eax, eax
        jne public_475f18
        mov eax, dword ptr ss : [esp+0x2C]
        mov word ptr ds : [ebx+eax], 0
        jmp public_475f35
        public_475f18 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax+0x14]
        push 0x40
        lea edx, ds:[ebx+ecx]
        mov ecx, dword ptr ds : [public_67eca8]
        push edx
        push eax
        push ecx
        call public_4347e0
        add esp, 0x10
        public_475f35 : nop
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [ebp+4]
        inc esi
        add ebx, 0x80
        cmp edi, eax
        jne public_475ee3
        mov ebx, dword ptr ss : [esp+0x24]
        public_475f49 : nop
        lea eax, ds:[ebx-1]
        lea esp, ss:[esp]
        public_475f50 : nop
        xor esi, esi
        test eax, eax
        mov bl, 1
        jle public_475fc2
        public_475f58 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+esi*8+4]
        mov ecx, dword ptr ds : [ecx+esi*8+0xC]
        mov edx, dword ptr ss : [esp+0x2C]
        shl ecx, 7
        add ecx, edx
        shl eax, 7
        push ecx
        add eax, edx
        push eax
        call dword ptr ds : [public_5c7200]
        add esp, 8
        test eax, eax
        jle public_475fb2
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+esi*8]
        mov edi, dword ptr ds : [ecx+esi*8+4]
        lea eax, ds:[ecx+esi*8]
        mov ecx, dword ptr ds : [ecx+esi*8+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ecx+esi*8+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+esi*8+8], edx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+esi*8+0xC], edi
        xor bl, bl
        public_475fb2 : nop
        mov edx, dword ptr ss : [esp+0x24]
        inc esi
        lea eax, ds:[edx-1]
        cmp esi, eax
        jl public_475f58
        test bl, bl
        je public_475f50
        public_475fc2 : nop
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x38], eax
        je public_475ff5
        nop 
        public_475fd0 : nop
        push 0
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        mov ecx, ebp
        call public_516f70
        cmp dword ptr ss : [esp+0x38], esi
        jne public_475fd0
        public_475ff5 : nop
        mov eax, dword ptr ss : [esp+0x24]
        xor esi, esi
        xor edi, edi
        cmp eax, esi
        jle public_47603e
        public_476001 : nop
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x18]
        push eax
        push esi
        mov ecx, ebp
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ds:[ebx+edi*8]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        inc edx
        inc edi
        cmp edi, eax
        mov dword ptr ss : [ebp+8], edx
        jl public_476001
        xor esi, esi
        public_47603e : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0xD0]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC4
        ret 
        UNREACHABLE_TRAP(0x475dd0)
    }
}

#undef public_475e66
#undef public_475e85
#undef public_475eb5
#undef public_475ed8
#undef public_475ee3
#undef public_475f18
#undef public_475f35
#undef public_475f49
#undef public_475f50
#undef public_475f58
#undef public_475fb2
#undef public_475fc2
#undef public_475fd0
#undef public_475ff5
#undef public_476001
#undef public_47603e
