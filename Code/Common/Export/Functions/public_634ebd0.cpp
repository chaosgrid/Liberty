#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_634ebd0);
CLANG_FORWARD_PROC_SYMBOL(public_634f140);
CLANG_FORWARD_PROC_SYMBOL(public_63505a0);
CLANG_FORWARD_PROC_SYMBOL(public_635c130);
CLANG_FORWARD_PROC_SYMBOL(public_635d030);
CLANG_FORWARD_PROC_SYMBOL(public_635d2e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6398001);

#define public_634ecd1 _public_634ecd1
#define public_634ed34 _public_634ed34
#define public_634ed3a _public_634ed3a
#define public_634ed52 _public_634ed52
#define public_634ed58 _public_634ed58
#define public_634ed78 _public_634ed78
#define public_634ed92 _public_634ed92
#define public_634edaf _public_634edaf
#define public_634edc2 _public_634edc2
#define public_634edcb _public_634edcb
#define public_634ee09 _public_634ee09
#define public_634ee13 _public_634ee13
#define public_634ee21 _public_634ee21
#define public_634ee50 _public_634ee50
#define public_634ee74 _public_634ee74
#define public_634eebb _public_634eebb
#define public_634eed1 _public_634eed1
#define public_634ef04 _public_634ef04
#define public_634ef3d _public_634ef3d
#define public_634ef75 _public_634ef75
#define public_634ef84 _public_634ef84
#define public_634ef9e _public_634ef9e
#define public_634efaf _public_634efaf
#define public_634efc4 _public_634efc4
#define public_634efda _public_634efda
#define public_634efde _public_634efde
#define public_634eff1 _public_634eff1
#define public_634f000 _public_634f000
#define public_634f011 _public_634f011
#define public_634f01a _public_634f01a
#define public_634f027 _public_634f027
#define public_634f03d _public_634f03d
#define public_634f05e _public_634f05e
#define public_634f061 _public_634f061
#define public_634f082 _public_634f082
#define public_634f08f _public_634f08f
#define public_634f091 _public_634f091
#define public_634f0b5 _public_634f0b5
#define public_634f0e1 _public_634f0e1
#define public_634f10b _public_634f10b
#define public_634f122 _public_634f122

PROC_DECLARE(0x634ebd0, internal_634ebd0, public_634ebd0);
extern "C" NAKED register_t __cdecl internal_634ebd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398001 @0x634ebd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398001
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC48
        push ebx
        push ebp
        lea eax, ss:[esp+0x250]
        mov dword ptr ss : [esp+0x24C], eax
        push esi
        mov ebp, ecx
        xor eax, eax
        push edi
        mov dword ptr ss : [esp+0x30], ebp
        mov word ptr ss : [esp+0x250], 0x80
        mov word ptr ss : [esp+0x252], ax
        mov ebx, dword ptr ss : [esp+0xC68]
        mov edi, dword ptr ds : [ebx+0x90]
        cmp edi, eax
        mov dword ptr ss : [esp+0xC60], eax
        mov dword ptr ss : [esp+0x18], edi
        je public_634f10b
        mov ecx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ds : [ebx+0x98]
        push edi
        call public_635d2e0
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax+0x7C]
        inc ecx
        mov dword ptr ds : [eax+0x7C], ecx
        fld dword ptr ds : [esi+0x124]
        mov edx, dword ptr ds : [esi+0x128]
        mov eax, dword ptr ds : [esi+0x12C]
        fstp dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, edx
        mov edx, eax
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ds:[ebx+0x44]
        mov dword ptr ds : [edi+0x14], ecx
        mov dword ptr ds : [edi+0x18], edx
        mov dword ptr ss : [esp+0x14], eax
        cmp dword ptr ss : [ebp], 0
        jne public_634f0e1
        mov ecx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+4]
        fadd dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        fstp dword ptr ss : [esp+0x10]
        je public_634ecd1
        mov eax, dword ptr ds : [ebx+0x78]
        shl eax, 0x18
        sar eax, 0x18
        test al, 7
        je public_634ecd1
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea eax, ds:[edi+0x10]
        push eax
        mov dword ptr ss : [ebp], 1
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp], 0
        public_634ecd1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x250]
        push ecx
        mov ecx, dword ptr ds : [edx+0x14]
        push eax
        push eax
        push edi
        call public_635d030
        fsub dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        mov ecx, edi
        call public_635c130
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [edx+0x18]
        mov edx, dword ptr ss : [esp+0x252]
        xor ecx, ecx
        mov cx, word ptr ds : [edi+0x2A]
        mov esi, edx
        and esi, 0xFFFF
        mov dword ptr ss : [esp+0x14], eax
        mov eax, 0x400
        add ecx, esi
        lea ecx, ds:[ecx*4+4]
        cmp ecx, eax
        jge public_634ed3a
        public_634ed34 : nop
        sar eax, 1
        cmp eax, ecx
        jg public_634ed34
        public_634ed3a : nop
        xor ecx, ecx
        mov cx, word ptr ds : [edi+0x2A]
        cmp eax, ecx
        jg public_634ed78
        add ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], 1
        jg public_634ed58
        public_634ed52 : nop
        shl eax, 1
        cmp eax, ecx
        jle public_634ed52
        public_634ed58 : nop
        lea edx, ds:[eax+eax]
        lea ebx, ds:[eax-1]
        push edx
        mov dword ptr ss : [esp+0x24], ebx
        call public_6343f70
        mov edx, dword ptr ss : [esp+0x256]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_634ed92
        public_634ed78 : nop
        lea ebx, ds:[eax-1]
        lea eax, ss:[esp+0x458]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x1C], eax
        public_634ed92 : nop
        lea eax, ds:[edi+0x28]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, ebx
        sar eax, 1
        mov dword ptr ss : [esp+0x2C], 0
        js public_634edc2
        mov ecx, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[ecx+eax*4]
        inc eax
        public_634edaf : nop
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        sub ecx, 4
        dec eax
        jne public_634edaf
        mov edx, dword ptr ss : [esp+0x252]
        public_634edc2 : nop
        xor esi, esi
        mov si, word ptr ds : [edi+0x2A]
        dec esi
        js public_634ee21
        public_634edcb : nop
        mov edx, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [edx+esi*4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x38]
        push edx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0xC68]
        xor ecx, eax
        xor ecx, edx
        mov edx, ecx
        sar edx, 8
        mov eax, edx
        shl eax, 0xA
        sub eax, edx
        add eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        and eax, ebx
        cmp word ptr ds : [ecx+eax*2], 0xFFFF
        je public_634ee13
        public_634ee09 : nop
        inc eax
        and eax, ebx
        cmp word ptr ds : [ecx+eax*2], 0xFFFF
        jne public_634ee09
        public_634ee13 : nop
        mov word ptr ds : [ecx+eax*2], si
        dec esi
        jns public_634edcb
        mov edx, dword ptr ss : [esp+0x252]
        public_634ee21 : nop
        lea eax, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x4C], eax
        mov word ptr ss : [esp+0x48], 0x80
        mov word ptr ss : [esp+0x4A], 0
        and edx, 0xFFFF
        dec edx
        mov byte ptr ss : [esp+0xC60], 2
        mov dword ptr ss : [esp+0x10], edx
        js public_634eff1
        public_634ee50 : nop
        mov ecx, dword ptr ss : [esp+0x254]
        mov eax, dword ptr ds : [ecx+edx*4]
        mov edx, dword ptr ss : [esp+0xC68]
        mov ebp, dword ptr ds : [eax+0x24]
        test byte ptr ds : [edx+0x78], 7
        jne public_634ee74
        test byte ptr ss : [ebp+0x78], 7
        je public_634efde
        public_634ee74 : nop
        mov eax, dword ptr ds : [edx+0x9C]
        cmp eax, dword ptr ss : [ebp+0x9C]
        je public_634efde
        mov eax, dword ptr ds : [edx+0x98]
        mov ecx, dword ptr ds : [eax]
        test ch, 3
        je public_634eebb
        mov ecx, dword ptr ss : [ebp+0x98]
        test dword ptr ds : [ecx], 0x300
        jne public_634efde
        mov ecx, dword ptr ds : [eax]
        test ch, 3
        je public_634eebb
        mov ecx, dword ptr ss : [ebp+0x98]
        test byte ptr ds : [ecx], 0xC
        jne public_634efde
        public_634eebb : nop
        test byte ptr ds : [eax], 0xC
        je public_634eed1
        mov eax, dword ptr ss : [ebp+0x98]
        mov ecx, dword ptr ds : [eax]
        test ch, 3
        jne public_634efde
        public_634eed1 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push edx
        call dword ptr ds : [eax]
        test eax, eax
        je public_634efde
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, ebp
        sar eax, 8
        mov esi, eax
        shl esi, 0xA
        sub esi, eax
        add esi, ebp
        and esi, ebx
        movsx edi, word ptr ds : [ecx+esi*2]
        cmp edi, 0xFFFFFFFF
        je public_634efaf
        public_634ef04 : nop
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edx+0x28]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x40]
        push eax
        mov dword ptr ss : [esp+0x38], ecx
        call dword ptr ds : [edx+4]
        cmp dword ptr ss : [esp+0x40], ebp
        je public_634ef3d
        cmp dword ptr ss : [esp+0x44], ebp
        je public_634ef3d
        mov ecx, dword ptr ss : [esp+0x1C]
        inc esi
        and esi, ebx
        movsx edi, word ptr ds : [ecx+esi*2]
        cmp edi, 0xFFFFFFFF
        je public_634efaf
        jmp public_634ef04
        public_634ef3d : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp edi, ecx
        jle public_634ef9e
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edx+0x28]
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+ecx*4]
        mov ecx, dword ptr ss : [esp+0xC68]
        push ecx
        push eax
        call public_634f140
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x34]
        and eax, ebx
        movsx edx, word ptr ds : [edx+eax*2]
        add esp, 8
        cmp edx, ecx
        je public_634ef84
        public_634ef75 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        inc eax
        and eax, ebx
        movsx edx, word ptr ds : [edx+eax*2]
        cmp edx, ecx
        jne public_634ef75
        public_634ef84 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov word ptr ds : [edx+eax*2], di
        mov eax, dword ptr ss : [esp+0x18]
        push edi
        mov word ptr ds : [edx+esi*2], cx
        push ecx
        lea ecx, ds:[eax+0x28]
        call public_63505a0
        public_634ef9e : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x34]
        inc ecx
        test eax, eax
        mov dword ptr ss : [esp+0x2C], ecx
        jne public_634efda
        public_634efaf : nop
        mov cx, word ptr ss : [esp+0x4A]
        cmp cx, word ptr ss : [esp+0x48]
        jb public_634efc4
        lea ecx, ss:[esp+0x48]
        call public_63441a0
        public_634efc4 : nop
        mov edx, dword ptr ss : [esp+0x4A]
        mov eax, dword ptr ss : [esp+0x4C]
        and edx, 0xFFFF
        mov dword ptr ds : [eax+edx*4], ebp
        inc word ptr ss : [esp+0x4A]
        public_634efda : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_634efde : nop
        mov edx, dword ptr ss : [esp+0x10]
        dec edx
        mov dword ptr ss : [esp+0x10], edx
        jns public_634ee50
        mov ebp, dword ptr ss : [esp+0x30]
        public_634eff1 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        xor esi, esi
        mov si, word ptr ds : [edi+0x2A]
        dec esi
        cmp esi, eax
        jl public_634f01a
        public_634f000 : nop
        mov ecx, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [ecx+esi*4]
        test ecx, ecx
        je public_634f011
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x10]
        public_634f011 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        dec esi
        cmp esi, eax
        jge public_634f000
        public_634f01a : nop
        mov ebx, dword ptr ss : [esp+0x4A]
        and ebx, 0xFFFF
        dec ebx
        js public_634f061
        public_634f027 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x4C]
        mov edi, dword ptr ds : [eax+ebx*4]
        xor esi, esi
        mov si, word ptr ds : [ecx+0x12E]
        dec esi
        js public_634f05e
        public_634f03d : nop
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov eax, dword ptr ss : [esp+0xC68]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        jne public_634f05e
        dec esi
        jns public_634f03d
        public_634f05e : nop
        dec ebx
        jns public_634f027
        public_634f061 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x50]
        cmp eax, ecx
        mov byte ptr ss : [esp+0xC60], 1
        je public_634f08f
        test eax, eax
        je public_634f082
        push eax
        call public_6343fb0
        add esp, 4
        public_634f082 : nop
        xor ecx, ecx
        mov dword ptr ss : [esp+0x4C], ecx
        mov word ptr ss : [esp+0x48], cx
        jmp public_634f091
        public_634f08f : nop
        xor ecx, ecx
        public_634f091 : nop
        cmp dword ptr ss : [esp+0x24], ecx
        mov word ptr ss : [esp+0x4A], cx
        mov byte ptr ss : [esp+0xC60], 0
        je public_634f0b5
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        je public_634f0b5
        push eax
        call public_6343fb0
        add esp, 4
        public_634f0b5 : nop
        mov eax, dword ptr ss : [esp+0x254]
        lea edx, ss:[esp+0x258]
        cmp eax, edx
        mov dword ptr ss : [esp+0xC60], 0xFFFFFFFF
        je public_634f122
        test eax, eax
        je public_634f122
        push eax
        call public_6343fb0
        add esp, 4
        jmp public_634f122
        public_634f0e1 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+0x14]
        push 0
        push eax
        push eax
        push edi
        mov dword ptr ss : [esp+0x40], eax
        call public_635d030
        fstp st(0)
        mov edx, dword ptr ss : [esp+0x14]
        push 0x2EDBE6FF
        push edx
        mov ecx, edi
        call public_635c130
        public_634f10b : nop
        lea ecx, ss:[esp+0x250]
        mov dword ptr ss : [esp+0xC60], 0xFFFFFFFF
        call public_63449d0
        public_634f122 : nop
        mov ecx, dword ptr ss : [esp+0xC58]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC54
        ret 4
        UNREACHABLE_TRAP(0x634ebd0)
    }
}

#undef public_634ecd1
#undef public_634ed34
#undef public_634ed3a
#undef public_634ed52
#undef public_634ed58
#undef public_634ed78
#undef public_634ed92
#undef public_634edaf
#undef public_634edc2
#undef public_634edcb
#undef public_634ee09
#undef public_634ee13
#undef public_634ee21
#undef public_634ee50
#undef public_634ee74
#undef public_634eebb
#undef public_634eed1
#undef public_634ef04
#undef public_634ef3d
#undef public_634ef75
#undef public_634ef84
#undef public_634ef9e
#undef public_634efaf
#undef public_634efc4
#undef public_634efda
#undef public_634efde
#undef public_634eff1
#undef public_634f000
#undef public_634f011
#undef public_634f01a
#undef public_634f027
#undef public_634f03d
#undef public_634f05e
#undef public_634f061
#undef public_634f082
#undef public_634f08f
#undef public_634f091
#undef public_634f0b5
#undef public_634f0e1
#undef public_634f10b
#undef public_634f122
