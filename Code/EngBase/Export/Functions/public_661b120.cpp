#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661b120);

#define public_661b162 _public_661b162
#define public_661b199 _public_661b199
#define public_661b215 _public_661b215
#define public_661b228 _public_661b228
#define public_661b23d _public_661b23d
#define public_661b255 _public_661b255
#define public_661b25d _public_661b25d
#define public_661b298 _public_661b298
#define public_661b319 _public_661b319
#define public_661b35b _public_661b35b
#define public_661b36f _public_661b36f
#define public_661b38c _public_661b38c
#define public_661b39f _public_661b39f
#define public_661b3a3 _public_661b3a3
#define public_661b3f5 _public_661b3f5
#define public_661b402 _public_661b402
#define public_661b406 _public_661b406

PROC_DECLARE(0x661b120, internal_661b120, public_661b120);
extern "C" NAKED register_t __cdecl internal_661b120()
{
    __asm
    {
        sub esp, 0xC
        lea edx, ss:[esp+4]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push edx
        mov eax, dword ptr ds : [esi+0x24]
        xor ebx, ebx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [esi+0x28]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 5
        jp public_661b228
        fld dword ptr ss : [esp+0x24]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 0x41
        jnp public_661b23d
        public_661b162 : nop
        mov al, byte ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x10], ebx
        test al, 1
        je public_661b199
        mov eax, dword ptr ds : [esi+0x24]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [eax]
        push ebp
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        add eax, edx
        mov dword ptr ds : [edi], eax
        public_661b199 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x44
        jnp public_661b215
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], ebx
        lea ebx, ss:[esp+0x10]
        mov eax, dword ptr ds : [esi+0x24]
        push ebx
        mov ebx, ebp
        sub ebx, ecx
        mov edx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0x34]
        lea ecx, ds:[ebx+ecx*8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi]
        mov al, byte ptr ss : [esp+0x28]
        add ecx, edx
        test al, 2
        mov dword ptr ds : [edi], ecx
        je public_661b215
        mov eax, dword ptr ds : [esi+0x24]
        lea ebx, ss:[esp+0x10]
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        sub ebp, ecx
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+ecx*8]
        push ebp
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        add eax, edx
        mov dword ptr ds : [edi], eax
        public_661b215 : nop
        mov eax, dword ptr ss : [esp+0x24]
        pop edi
        mov dword ptr ds : [esi+0x1C], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 0x18
        public_661b228 : nop
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        and eax, 0x100
        jne public_661b162
        public_661b23d : nop
        fld dword ptr ds : [esi+0x28]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 5
        jp public_661b255
        fld dword ptr ss : [esp+0x20]
        fchs 
        jmp public_661b25d
        public_661b255 : nop
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x20]
        public_661b25d : nop
        mov al, byte ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x10], ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x18]
        test al, 1
        je public_661b298
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi]
        add ecx, eax
        mov dword ptr ds : [edi], ecx
        public_661b298 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        test ah, 0x44
        jnp public_661b319
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0x10]
        mov ecx, dword ptr ds : [esi+0x24]
        push edx
        mov edx, ebp
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [ecx]
        sub edx, eax
        lea eax, ds:[ebx+eax*8]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        call dword ptr ds : [ecx+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi]
        add edx, ecx
        mov cl, byte ptr ss : [esp+0x28]
        test cl, 2
        mov dword ptr ds : [edi], edx
        mov eax, edx
        je public_661b319
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        sub ecx, eax
        lea eax, ds:[ebx+eax*8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push eax
        mov eax, dword ptr ds : [esi+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        add eax, edx
        mov dword ptr ds : [edi], eax
        public_661b319 : nop
        mov eax, dword ptr ds : [esi+0x20]
        fld dword ptr ds : [esi+0x28]
        fcomp qword ptr ds : [public_6629238]
        test al, 2
        je public_661b38c
        fnstsw ax
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], 0
        test ah, 5
        mov eax, dword ptr ds : [edi]
        push ecx
        lea edx, ds:[ebx+eax*8]
        jp public_661b35b
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x28]
        sub ebp, eax
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        push edx
        push 3
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        jmp public_661b36f
        public_661b35b : nop
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x18]
        sub ebp, eax
        push ebp
        push edx
        push 3
        push ecx
        fstp dword ptr ss : [esp]
        push 0
        public_661b36f : nop
        mov ecx, esi
        call public_661b120
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi]
        add ecx, eax
        xor eax, eax
        mov dword ptr ds : [edi], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0x18
        public_661b38c : nop
        test al, 4
        fnstsw ax
        je public_661b3f5
        test ah, 5
        jp public_661b39f
        fld qword ptr ds : [public_6629238]
        jmp public_661b3a3
        public_661b39f : nop
        fld dword ptr ss : [esp+0x14]
        public_661b3a3 : nop
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0x28]
        fchs 
        fstp dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x24]
        sub ebp, eax
        push ecx
        lea edx, ds:[ebx+eax*8]
        mov eax, dword ptr ss : [esp+0x24]
        push ebp
        push edx
        push 2
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0
        call public_661b120
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        add eax, ecx
        mov dword ptr ds : [edi], eax
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 0x18
        public_661b3f5 : nop
        test ah, 5
        jp public_661b402
        fld qword ptr ds : [public_6629238]
        jmp public_661b406
        public_661b402 : nop
        fld dword ptr ss : [esp+0x14]
        public_661b406 : nop
        mov eax, dword ptr ds : [esi+0x34]
        pop edi
        fstp dword ptr ds : [esi+0x1C]
        or al, 2
        mov dword ptr ds : [esi+0x34], eax
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xC
        ret 0x18
        UNREACHABLE_TRAP(0x661b120)
    }
}

#undef public_661b162
#undef public_661b199
#undef public_661b215
#undef public_661b228
#undef public_661b23d
#undef public_661b255
#undef public_661b25d
#undef public_661b298
#undef public_661b319
#undef public_661b35b
#undef public_661b36f
#undef public_661b38c
#undef public_661b39f
#undef public_661b3a3
#undef public_661b3f5
#undef public_661b402
#undef public_661b406
